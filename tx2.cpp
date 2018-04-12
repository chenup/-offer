#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	int A, B, X, Y;
	scanf("%d", &n);
	scanf("%d%d%d%d", &A, &X, &B, &Y);
	long long res = 0;
	vector<int> tmp;
	for(int i = 0; i < X; i++)
	{
		tmp.push_back(A);
	}
	for(int i = 0; i < Y; i++)
	{
		tmp.push_back(B);
	}
	helper(tmp, res, n);
	return 0;
}

void helper(vector<int>& tmp, long long &res, int n)
{
	if(n == 0)
	{
		res++;
		return; 
	}
	else if(n < 0)
	{
		return;
	}
	for(auto it = tmp.begin(); it < tmp.end();)
	{
		if(it != tmp.begin() && *(it - 1) == *it)
		{
			break;
		}
		int val = *it;
		auto next = it++;
		tmp.erase(it);
		helper(tmp, res, n - val);
		it = tmp.insert(next, val);
		it++;
	}
}