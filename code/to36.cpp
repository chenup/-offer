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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        if(pHead1 == NULL || pHead2 == NULL)
        {
        	return NULL;
        }
        int len1 = 0;
        int len2 = 0;
        ListNode* p;
        ListNode* q;
        p = pHead1;
        while(p)
        {
        	p = p->next;
        	len1++;
        }
        q = pHead2;
        while(q)
        {
        	q = q->next;
        	len2++;
        }
        p = pHead1;
        q = pHead2;
        if(len1 > len2)
        {
        	for(int i = len1; i > len2; i--)
        	{
        		p = p->next;
        	}
        }
        else if(len1 < len2)
        {
        	for(int i = len2; i > len1; i--)
        	{
        		q = q->next;
        	}
        }
        while(p && q)
        {
        	if(p == q)
        	{
        		return p;
        	}
        	p = p->next;
        	q = q->next;
        }
        return NULL;
    }
};