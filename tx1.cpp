#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long n, m;
	scanf("%d %d", &n, &m);
	int num = n / (2 * m);
	cout << m * m * num << endl;
	return 0;
}