#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;


int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	int res = 0;
	int m = 1;
	int s = 1;
	int k = 0;
	if(n == 1)
	{
		cout << res << endl;
		return 0;
	}
	helper(n, m, s, k, res);
	cout << res << endl;
	return 0;
}

void helper(int n, int m, int s, int k, int& res)
{
	if(n == s)
	{
		if(res > k)
		{
			res = k;
		}
		return;
	}
	if(s > n)
	{
		return;
	}
	int tmp = m;
	m = s;
	s = s + s;
	helper(n, m, s, k + 1, res);
	s = m;
	m = tmp;
	s = m + s;
	helper(n, m, s, k + 1, res);
	return;
}
/*
int helper(int n)
{
	if(n == 1)
	{
		return 0;
	}
	if(n % 2 == 0)
	{
		return helper(n / 2) + 1;
	}
	else
	{

	}
}
*/
