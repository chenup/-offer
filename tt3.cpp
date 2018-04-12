#include <iostream>
#include <algorithm>
#include <cstdio>
#include <stack>
#include <cstring>
using namespace std;

#define N 1000000

vector<vector<string>> ctable = {{{"66666"}, {"....6"}, {"66666"}, {"66666"},{"6...6"}, {"66666"},{"66666"}, {"66666"},{"66666"}, {"66666"}},
								 {{"6...6"}, {"....6"}, {"....6"}, {"....6"},{"6...6"}, {"6...."},{"6...."}, {"....6"},{"6...6"}, {"6...6"}},
								 {{"6...6"}, {"....6"}, {"66666"}, {"66666"},{"66666"}, {"66666"},{"66666"}, {"....6"},{"66666"}, {"66666"}},
								 {{"6...6"}, {"....6"}, {"6...."}, {"....6"},{"....6"}, {"....6"},{"6...6"}, {"....6"},{"6...6"}, {"....6"}},
								 {{"6...6"}, {"....6"}, {"66666"}, {"66666"},{"....6"}, {"66666"},{"66666"}, {"....6"},{"66666"}, {"66666"}},
								};
void printRes(string str);
int main(int argc, char const *argv[])
{
	int n;
	char str[N];
	stack<long long> num;
	stack<char> op;
	long long sign;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		sign = 1;
		scanf("%s", str);
		long long tmp = 0;
		for(int i = 0; i < strlen(str); i++)
		{
			if('0' <= str[i] && str[i] <= '9')
			{
				tmp = tmp * 10 + str[i] - '0';
			}
			else
			{
				tmp = sign * tmp;
				if(str[i] == '+' || str[i] == '-')
				{
					sign = (str[i] == '+' ? 1 : -1);
					num.push(tmp);
					while(!op.empty() && op.top() == '*')
					{
						op.pop();
						long long a = num.top();
						num.pop();
						long long b = num.top();
						num.push(b);
						long long c = a * b;
						num.push(c);
 					}
 					op.push('+');
				}
				else if(str[i] == '*')
				{
					sign = 1;
					op.push('*');
					num.push(tmp);
				}
				tmp = 0;
			}
		}
		tmp = sign * tmp;
		num.push(tmp);
		while(!op.empty())
		{
			char ch = op.top();
			op.pop();
			long long a = num.top();
			num.pop();
			long long b = num.top();
			num.pop();
			long long c = (ch == '+' ? a + b : a * b);
			num.push(c);
		}
		//cout << num.top() << endl;
		printRes(to_string(num.top()));
	}
	return 0;
}

void printRes(string str);
{
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < str.size(); j++)
		{
			cout << ctable[i][str[j] - '0'];
			if(j < str.size() - 1)
			{
				cout << '..';
			}
		}
		cout << endl;
	}
}