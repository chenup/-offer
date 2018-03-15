/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
    	if(pRoot2 == NULL || pRoot1 == NULL)
    	{
    		return false;
    	}
    	return dfs(pRoot1, pRoot2);
    }

    bool dfs(TreeNode* pRoot1, TreeNode* pRoot2)
    {
    	if(pRoot1 == NULL)
    	{
    		return false;
    	}
    	if(pRoot1->val == pRoot2->val && isSameTree(pRoot1, pRoot2))
    	{
    		return true;
    	}
    	return dfs(pRoot1->left, pRoot2) || dfs(pRoot1->right, pRoot2);
    }

    bool isSameTree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
    	if(pRoot2 == NULL)
    	{
    		return true; 
    	}
    	if(pRoot2 != NULL && pRoot1 == NULL)
    	{
    		return false; 
    	}
    	if(pRoot1->val != pRoot2->val)
    	{
    		return false;
    	}
    	return isSameTree(pRoot1->left, pRoot2->left) && isSameTree(pRoot1->right, pRoot2->right);
    }
};