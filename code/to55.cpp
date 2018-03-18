/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
    	if(pHead == NULL || pHead->next == NULL)
    	{
    		return NULL;
    	}
    	ListNode* slow = pHead;
    	ListNode* fast = pHead;
    	slow = slow->next;
    	fast = fast->next->next;
    	while(fast != slow)
    	{
    		if(fast == NULL || fast->fast == NULL)
    		{
    			return NULL;
    		}
    		slow = slow->next;
    		fast = fast->next->next;
    	}
    	while(pHead != slow)
    	{
    		pHead = pHead->next;
    		slow = slow->next;
    	}
    	return pHead;
    }
};	