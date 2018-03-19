/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    bool isSymmetrical(TreeNode* pRoot)
    {
    	if(pRoot == NULL)
    	{
    		return true;
    	}
    	return helper(pRoot->left, pRoot->right);
    }

    bool helper(TreeNode* pl, TreeNode* pr)
    {
    	if(pl == NULL || pr == NULL)
    	{
    		return !pl && !pr;
    	}
    	if(pl->val != pr->val)
    	{
    		return false;
    	}
    	return helper(pl->left, pr->right) && helper(pl->right, pr->left);
    }
};