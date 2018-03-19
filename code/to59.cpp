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
    vector<vector<int> > Print(TreeNode* pRoot) {
        vector<vector<int>> res;
        vector<int> tmp;
        if(pRoot == NULL)
        {
        	return res;
        }
        ltr.push(pRoot);
        while(true)
        {
        	while(!ltr.empty())
        	{
        		TreeNode* p = ltr.top();
        		ltr.pop();
        		if(p->left) rtl.push(p->left);
        		if(p->right) rtl.push(p->right);
        		tmp.push_back(p->val);
        	}
        	if(tmp.empty())
        	{
        		break;
        	}
        	res.push_back(tmp);
        	tmp.clear();
        	while(!rtl.empty())
        	{
        		TreeNode* p = rtl.top();
        		rtl.pop();
        		if(p->right) ltr.push(p->right);
        		if(p->left) ltr.push(p->left);
        		tmp.push_back(p->val);
        	}
        	if(tmp.empty())
        	{
        		break;
        	}
        	res.push_back(tmp);
        	tmp.clear();
        }
        return res;
    }
private:
	stack<TreeNode*> ltr;
	stack<TreeNode*> rtl;    
};
