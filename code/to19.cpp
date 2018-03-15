class Solution {
public:
    vector<int> printMatrix(vector<vector<int>> matrix) {
        vector<int> res;
        int m = matrix.size();
        if(m == 0)
        {
        	return res;
        }
        int n = matrix[0].size();
        if(n == 0)
        {
        	return res;
        }
        helper(res, matrix, 0, m - 1, 0, n - 1, 0);
        return res;
    }

    void helper(vector<int>& res, vector<vector<int>>& matrix, int i_lo, int i_hi, int j_lo, int j_hi, int dir)
    {
    	if(i_lo > i_hi || j_lo > j_hi)
    	{
    		return;
    	}
    	switch(dir)
    	{
    		case 0:
    		{
    			for(int j = j_lo; j <= j_hi; j++)
    			{
    				res.push_back(matrix[i_lo][j]);
    			}
    			helper(res, matrix, i_lo + 1, i_hi, j_lo, j_hi, 1);
    		}
    		break;
    		case 1:
    		{
    			for(int i = i_lo; i <= i_hi; i++)
    			{
    				res.push_back(matrix[i][j_hi]);
    			}
    			helper(res, matrix, i_lo, i_hi, j_lo, j_hi - 1, 2);
    		}
    		break;
    		case 2:
    		{
    			for(int j = j_hi; j >= j_lo; j--)
    			{
    				res.push_back(matrix[i_hi][j]);
    			}
    			helper(res, matrix, i_lo, i_hi - 1, j_lo, j_hi, 3);
    		}
    		break;
    		case 3:
    		{
    			for(int i = i_hi; i >= i_lo; i--)
    			{
    				res.push_back(matrix[i][j_lo]);
    			}
    			helper(res, matrix, i_lo, i_hi, j_lo + 1, j_hi, 0);
    		}
    		break;
    		default:
    		break;
    	}
    	return;
    }
};