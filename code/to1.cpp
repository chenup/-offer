class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
       	int m = array.size();
       	if(m == 0)
       	{
       		return false;
       	}
       	int n = array[0].size();
       	if(n == 0)
       	{
       		return false;
       	}
       	int i = m - 1, j = 0;
       	while(i >= 0 && j < n)
       	{
       		if(array[i][j] == target)
       		{
       			return true;
       		}
       		else if(array[i][j] < target)
       		{
       			j++;
       		}
       		else
       		{
       			i--;
       		}
       	}
       	return false;
    }
};