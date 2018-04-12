#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	vector<int> num(n, 0);
	for(int i = 0; i < n; i++)
	{
		int t;
		scanf("%d", &t);
		num[i] = t;
	}
	vector<int> dp(n, 0);
	for(int i = 0; i < n - 1; i++)
	{
		dp[i] = i + num[i];
	}
	vector<int> res(n, 0)
	for(int i = 1; i < n; i++)
	{
		int min = INT_MAX;
		for(int j = i - 1; j >= 0; j--)
		{
			if(dp[j] >= i)
			{
				if(min > res[i])
				{
					min = res[i];
				}
			}
		}
		res[i] = min + 1;
	}
	cout << res.back() << endl;
	return str;
}