#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
	if(b == 0)
	{
		return a;
	}
	if(b > a)
	{
		return gcd(b, a);
	}
	return a % b == 0 ? b : gcd(b, a - b);
}
int main(int argc, char const *argv[])
{
	int N, n, m, p;
	long long sum = 0;
	scanf("%d%d%d%d", &N, &n, &m, &p);
	vector<bool> visited(n + 1, vector<bool>(m + 1, -1));
	vector<int> A(N + 1, 0);
	A[1] = p;
	for(int i = 2; i <= N; i++)
	{
		A[i] = (A[i - 1] + 153) % p;
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(visited[i][j] == -1)
			{
				int t = A[gcd(i, j)];
				visited[i][j] = t;
				visited[j][i] = t;
				sum += t;
			}
			else
			{
				sum += visited[i][j];
			}
			
		}
	}
	cout << sum << endl;
	return 0;
}