#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	map<char, int> tmp;
	string s;
	sum = s.size();
	cin >> s;
	for(auto c : s)
	{
		tmp[c]++;
	}
	string str = "";
	while(sum > 0)
	{
		for(auto c : tmp)
		{
			if(c.second > 0)
			{
				str += c.first;
				c.second--;
				sum--;
			}
		}
	}
	
	return str;
}