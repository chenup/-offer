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
    int TreeDepth(TreeNode* pRoot)
    {
    	if(pRoot == NULL)
    	{
    		return 0;
    	}
    	int res = 0;
    	dfs(pRoot, 0, res);
    	return res;
    }

    void dfs(TreeNode* root, int k, int& deep)
    {
    	if(root == NULL)
    	{
    		if(deep < k)
    		{
    			deep = k;
    		}
    		return;
    	}
    	dfs(root->left, k + 1, deep);
    	dfs(root->right, k + 1, deep);
    }

};