class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        if(pRoot == NULL)
        {
        	return true;
        }
        bool flag = true;
        getHeight(pRoot, flag);
        return flag;
    }

    int getHeight(TreeNode* pRoot, bool& flag)
    {
    	if(pRoot == NULL)
    	{
    		return 0;
    	}
    	int hl = 0;
    	int hr = 0;
    	if(flag)
    	{
    		hl = getHeight(pRoot->left, flag);
    	}
    	if(flag)
    	{
    		hr = getHeight(pRoot->right, flag);
    	}
    	if(abs(hl - hr) <= 1)
    	{
    		return max(hl, hr) + 1;
    	}
    	else
    	{
    		flag = false;
    	}
    	return 0;
    }
};