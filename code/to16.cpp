/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
    	ListNode* p = pHead1;
    	ListNode* q = pHead2;
    	ListNode* head = new ListNode(-1);
    	ListNode* k = head;
    	if(pHead1 == NULL)
    	{
    		return pHead2;
    	}
    	if(pHead2 == NULL)
    	{
    		return pHead1;
    	}
        while(p != NULL && q != NULL)
        {
        	if(p->val <= q->val)
        	{
        		k->next = p;
        		p = p->next;
        		k->next->next = NULL;
        		k = k->next;
        	}
        	else
        	{
        		k->next = q;
        		q = q->next;
        		k->next->next = NULL;
        		k = k->next;
        	}
        }
        if(p != NULL)
        {
        	k->next = p;
        }
        if(q != NULL)
        {
        	k->next = q;
        }
        return head->next;
    }
};