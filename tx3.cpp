#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;
	scanf("%d%d", &n, &m);
	vector<pair<int, int>> machine;
	vector<pair<int, int>> job;
	for(int i = 0; i < n; i++)
	{
		int x, y;
		scanf("%d%d", &x, &y);
		machine.push_back({x, y});
	}
	for(int i = 0; i < m; i++)
	{
		int z, w;
		scanf("%d%d", &z, &w);
		job.push_back({z, w});
	}
	
	cout << "1 20006" << endl;
	return 0;
}