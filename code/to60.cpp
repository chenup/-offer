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
    	queue<TreeNode*> tq1;
    	queue<TreeNode*> tq2;
    	if(pRoot == NULL)
    	{
    		return res;
    	}
    	tq1.push(pRoot);
    	vector<int> tmp;
    	while(true)
    	{
    		while(!tq1.empty())
    		{
    			TreeNode* p =  tq1.front();
    			tq1.pop();
    			tmp.push_back(p->val);
    			if(p->left) tq2.push(p->left);
    			if(p->right) tq2.push(p->right);

    		}
    		if(tmp.empty())
    		{
    			break;
    		}
    		res.push_back(tmp);
    		tmp.clear();
    		while(!tq2.empty())
    		{
    			TreeNode* p =  tq2.front();
    			tq2.pop();
    			tmp.push_back(p->val);
    			if(p->left) tq1.push(p->left);
    			if(p->right) tq1.push(p->right);
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
    
};