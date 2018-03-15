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
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
    	vector<vector<int>> res;
    	if(root == NULL)
    	{
    		return res;
    	}
    	vector<int> tmp;
    	dfs(root, res, tmp, 0, expectNumber);
    	return res;
    }

    void dfs(TreeNode* root, vector<vector<int>>& res, vector<int>& tmp, int sum, int expectNumber)
    {
        sum += root->val;
    	tmp.push_back(root->val);
        if(root->left == NULL && root->right == NULL)
    	{
    		if(sum == expectNumber)
    		{
    			res.push_back(tmp);
    		}
            tmp.pop_back();
    	    sum -= root->val;
    		return;
    	}
    	if(root->left) dfs(root->left, res, tmp, sum, expectNumber);
    	if(root->right) dfs(root->right, res, tmp, sum, expectNumber);
    	tmp.pop_back();
    	sum -= root->val;
    }
};