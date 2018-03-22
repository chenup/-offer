/*
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};
*/
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
    	if(pNode == NULL)
    	{
    		return NULL;
    	}
    	if(pNode->right)
    	{
    		return GetFirst(pNode->right);
    	}
    	while(pNode->next && pNode->next->left != pNode)
    	{
    		pNode = pNode->next;
    	}
    	return pNode->next;
    }
    
    TreeLinkNode* GetFirst(TreeLinkNode* pNode)
    {
    	if(pNode == NULL)
    	{
    		return NULL;
    	}
    	if(pNode->left == NULL)
    	{
    		return pNode;
    	}
    	return GetFirst(pNode->left);
    }
};

