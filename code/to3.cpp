/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> res;
        helper(res, head);
        return res;
    }

    void helper(vector<int>& res, ListNode* head)
    {
    	if(head == NULL)
    	{
    		return;
    	}
    	helper(res, head->next);
    	res.push_back(head->val);
    }
};