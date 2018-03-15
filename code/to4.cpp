/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
    	if(pre.size() == 0)
    	{
    		return NULL;
    	}	
    	TreeNode *root = new TreeNode(pre[0]);
    	int i;
    	for(i = 0; i < vin.size(); i++)
    	{
    		if(vin[i] == pre[0])
    		{
    			break;
    		}
    	}
    	vector<int> left_pre;
    	vector<int> left_vin;
    	left_pre.assign(pre.begin() + 1, pre.begin() + i + 1);
    	left_vin.assign(vin.begin(), vin.begin() + i);
    	root->left = reConstructBinaryTree(left_pre, left_vin);
    	vector<int> right_pre;
    	vector<int> right_vin;
    	right_pre.assign(pre.begin() + i + 1, pre.end());
    	right_vin.assign(vin.begin() + i + 1, vin.end());
    	root->right = reConstructBinaryTree(right_pre, right_vin);
    	return root;
    }

};