/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
/* 从尾部开始前插
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
    	if(pHead == NULL)
    	{
    		return NULL;
    	}
    	ListNode* p = pHead;
    	while(p->next != NULL)
    	{
    		p = p->next;
    	}
    	while(p != pHead)
    	{
    		ListNode* tmp;
    		tmp = pHead->next;
    		pHead->next = p->next;
    		p->next = pHead;
    		pHead = tmp;
    	}
    	return p;
    }
};
*/

/* 新增头部，然后在头部前插
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
    	if(pHead == NULL || pHead->next == NULL)
    	{
    		return pHead;
    	}
    	ListNode* head = new ListNode(-1);
    	head->next = NULL;
    	while(pHead != NULL)
    	{
    		ListNode* tmp = head->next;
    		head->next = pHead;
    		pHead = pHead->next;
    		head->next->next = tmp;
    	}
    	return head->next;
    }
};
*/
//递归
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) 
    {
    	if(pHead == NULL || pHead->next == NULL)
    	{
    		return pHead;
    	}
    	ListNode* tmp = ReverseList(pHead->next);
    	pHead->next->next = pHead;
    	pHead->next = NULL;
    	return tmp;
    }
};
