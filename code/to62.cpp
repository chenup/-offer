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
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
    	if(pRoot == nullptr)
    	{
    		return nullptr;
    	}
    	TreeNode* ret = KthNode(pRoot->left, k);
        if(ret != nullptr)
        {
            return ret;
        }
    	if(count++ == k)
    	{
    		return pRoot;
    	}
    	return KthNode(pRoot->right, k);
    }
private:
	int count = 1;
    
};