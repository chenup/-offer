class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
    	if(sequence.size() == 0)
    	{
    		return false;
    	}
    	int root = sequence.back();
    	vector<int> left;
    	vector<int> right;
    	for(int i = 0; i < sequence.size() - 1; i++)
    	{
    		if(sequence[i] < root && right.size() == 0)
    		{
    			left.push_back(sequence[i]);
    		}
    		else if(sequence[i] > root)
    		{
    			right.push_back(sequence[i]);
    		}
    		else
    		{
    			return false;
    		}
    	}
        if(left.size() != 0 && !VerifySquenceOfBST(left))
        {
        	return false;
        }
        if(right.size() != 0 && !VerifySquenceOfBST(right))
        {
        	return false;
        }
        return true;
    }
};