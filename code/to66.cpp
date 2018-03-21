class Solution {
public:
    int movingCount(int threshold, int rows, int cols)
    {
    	vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        int res = 0;
        helper(visited, 0, 0, threshold, res);
        return res;
    }

    void helper(vector<vector<bool>> &visited, int i, int j, int threshold, int &res)
    {
    	if(i < 0 || i >= visited.size() || j < 0 || j >= visited[0].size())
    	{
    		return;
    	}
    	if(visited[i][j])
    	{
    		return;
    	}
    	if(isArrived(threshold, i, j))
    	{
    		visited[i][j] = true;
    		res++;
    		helper(visited, i - 1, j, threshold, res);
    		helper(visited, i + 1, j, threshold, res);
    		helper(visited, i, j - 1, threshold, res);
    		helper(visited, i, j + 1, threshold, res);
    	}
    	else
    	{
    		visited[i][j] = true;
    	}
    }

    bool isArrived(int threshold, int i, int j)
    {
    	int sum = 0;
    	while(i)
    	{
    		sum += i % 10;
    		i /= 10;
    	}
    	while(j)
    	{
    		sum += j % 10;
    		j /= 10;
    	}
    	return threshold >= sum;
    }
};