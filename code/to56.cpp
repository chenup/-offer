class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if(pHead == NULL)
        {
        	return NULL;
        }
        ListNode* head = new ListNode(-1);
        head->next = pHead;
        ListNode* pre;
        ListNode* pos;
        int cnt = 0;
        int val;
        pre = head;
        pos = pHead;
        while(pos != NULL)
        {
        	cout << pos->val << endl;
        	if(cnt == 0)
        	{
        		val = pos->val;
        		cnt = 1;
        	}
			else if(val != pos->val)
        	{
        		if(cnt > 1)
        		{
        			pre->next = pos;
        		}
        		else
        		{
        			pre = pre->next;
        		}
        		val = pos->val;
        		cnt = 1;
        	}
        	else
        	{
        		cnt++;
        	}
        	pos = pos->next;
        }
        if(cnt > 1)
        {
        	pre->next = NULL;
        }
        return head->next;
    }
};