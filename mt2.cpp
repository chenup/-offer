#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	int t;
	long long sum;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		sum = 0;
		int cnt = 0;
		int tmp = n;
		int tt = 1;
		while(tmp > 0)
		{
			cnt++;
			tmp /= 10;
		}
		if(cnt == 1)
		{
			sum = n;
		}
		else
		{
			for (int i = 0; i < cnt - 1; i++) 
			{
				sum += (i + 1) * 9 * (tt);
				tt *= 10;
			}
			sum += cnt * (n - pow(10, cnt - 1) + 1);

		}
		cout << sum << endl;
	}
	return 0;
}