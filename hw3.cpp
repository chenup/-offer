#include <iostream>
#include <algorithm>

using namespace std;
#define M 4
#define N 10000
int main()
{
	string A;
	string B;
	string res;
	vector<int> a;
	vector<int> b;
	vector<int> c;
	cin >> A;
	cin >> B;
	string left = A;
	int m = A.size() / M;
	while(left.size() >= M)
	{
		string sub = left.substr(left.size() - M, M);
		left = left.substr(0, left.size() - M);
		a.push_back(atoi(sub.c_str()));
	}
	if(left.size() != 0)
	{
		a.push_back(atoi(left.c_str()));
	}

	for(int i = B.size() - 1; i >= 0; i++)
	{
		b.clear();
		int t = B[i] - '0';
		if(t == 0)
		{
			continue;
		}
		int l = B.size() - 1 - i;
		for(l >= M)
		{
			l -= M;
			b.push_back(0);
		}
		int s = 1;
		for(int j = 0; j < l; j++)
		{
			s *= 10;
		}
		int c = 0;
		for(auto e : a)
		{
			int tmp = e * t * s + c;
			c = tmp / N;
			b.push_back(tmp % N);
		}
		if(c != 0)
		{
			b.push_back(c);
		}
		int k = 0;
		c = 0;
		while(k < c.size() && k < b.size())
		{
			int tmp = c[k] + b[k] + c;
			c = tmp / N;
			c[k] = tmp % N; 
			k++;
		}
		while(k < c.size())
		{
			if(c == 0)
			{
				break;
			}
			int tmp = c[k] + c;
			c = tmp / N;
			c[k] = tmp % N;
			k++;
		}
		if(k < b.size())
		{
			int tmp = b[k] + c;
			c = tmp / N;
			c.push_back(tmp % N);
			k++;
		}
		if(c != 0)
		{
			c.push_back(c);
		}
	}
	for(auto it : c)
	{
		string str = to_string(it);
		int i = str.size();
		while(i < M)
		{
			str = "0" + str;
			i++;
		}
		res = str + res;
	}
	cout << res << endl;
	return 0;
}