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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
    	if(k <= 0 || pListHead == NULL)
    	{
    		return NULL;
    	}
    	ListNode* fast = pListHead;
    	ListNode* slow = pListHead; 
    	while(k > 0 && fast != NULL)
    	{
    		fast = fast->next;
            k--;
    	}
    	if(k > 0)
    	{
    		return NULL;
    	}
    	while(fast != NULL)
    	{
    		fast = fast->next;
    		slow = slow->next;
    	}
    	return slow;
    }
};