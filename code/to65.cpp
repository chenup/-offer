class Solution {
public:
	
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
    	if(str == nullptr)
    	{
    		return true;
    	}
    	if(rows == 0 || cols == 0)
    	{
    		return false;
    	}
    	vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    	for(int i = 0; i < rows; i++)
    	{
    		for(int j = 0; j < cols; j++)
    		{
    			if(helper(visited, matrix, i, j, rows, cols, str))
    			{
    				return true;
    			}
    		}
    		
    	}
    	return false;
    }
    
    bool helper(vector<vector<bool>> visited, char* matrix, int i, int j, int rows, int cols, char* str)
    {
        if(*str == '\0')
    	{
    		return true;
    	}
    	if(i < 0 || i >= rows || j < 0 || j >= cols)
    	{
    		return false;
    	}
    	
    	if(visited[i][j])
    	{
    		return false;
    	}
    	else if(*str == matrix[i * cols + j])
    	{
    		visited[i][j] = true;
    		if(helper(visited, matrix, i + 1, j, rows, cols, str + 1) 
    		|| helper(visited, matrix, i - 1, j, rows, cols, str + 1) 
    		|| helper(visited, matrix, i, j + 1, rows, cols, str + 1) 
    		|| helper(visited, matrix, i, j - 1, rows, cols, str + 1))
    		{
    			return true;
    		}
    		visited[i][j] = false;
    	}
    	return false;
    }

};