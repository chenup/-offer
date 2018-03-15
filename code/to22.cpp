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
    vector<int> PrintFromTopToBottom(TreeNode* root) {
    	queue<TreeNode*> nodeQueue;
    	vector<int> res;
    	if(root == NULL)
    	{
    		return res;
    	}
    	nodeQueue.push(root);
    	while(nodeQueue.size())
    	{
    		TreeNode* t = nodeQueue.front();
    		res.push_back(t->val);
    		nodeQueue.pop();
    		if(t->left)
    		{
    			nodeQueue.push(t->left);
    		}
    		if(t->right)
    		{
    			nodeQueue.push(t->right);
    		}
    	}
    	return res;
    }
};