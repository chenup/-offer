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
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
    	TreeNode* pre = NULL;
    	TreeNode* head = NULL;
    	helper(pRootOfTree, pre, head);
    	return head;
    }

    void helper(TreeNode* root, TreeNode* &pre, TreeNode* &head)
    {
    	if(root == NULL)
    	{
    		return;
    	}
    	helper(root->left, pre, head);
    	if(pre == NULL)
    	{
    		head = root;
    	}
    	else
    	{
    		root->left = pre;
    		pre->right = root;
    	}
    	pre = root;
    	helper(root->right, pre, head);
    }
};