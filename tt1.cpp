#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

bool binarysearch(vector<int>& num, int lo, int hi, int k);

int main(int argc, char const *argv[])
{
	int n;
	int k;
	scanf("%d%d", &n, &k);
	int res = 0;
	vector<int> num(n, 0);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	sort(num.begin(), num.end()); 
	for(int i = 0; i < n - 1; i++)
	{
		if(i == 0)
		{
			if(binarysearch(num, i + 1, n - 1, num[i] + k))
			{
				res++;
			}
			continue;
		}
		if(num[i] == num[i - 1])
		{
			continue;
		}
		if(binarysearch(num, i + 1, n - 1, num[i] + k))
		{
			res++;
		}
	}
	cout << res << endl;
	return 0;
}

bool binarysearch(vector<int>& num, int lo, int hi, int k)
{
	if(lo > hi)
	{
		return false;
	}
	int mid = lo + (hi - lo) / 2;
	if(num[mid] == k)
	{
		return true;
	}
	else if(num[mid] < k)
	{
		return binarysearch(num, mid + 1, hi, k);
	}
	else
	{
		return binarysearch(num, lo, mid - 1, k);
	}
}