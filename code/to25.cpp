/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
    	if(pHead == NULL)
    	{
    		return NULL;
    	}
    	map<RandomListNode*, RandomListNode*> tmp;
        RandomListNode* head = new RandomListNode(pHead->label);
       	tmp[pHead] = head;
        RandomListNode* p;
        RandomListNode* rand;
        RandomListNode* pre = NULL;
        while(pHead != NULL)
        {

        	if(tmp.find(pHead) != tmp.end())
        	{
        		p = tmp[pHead];
        	}
        	else
        	{
        		p = new RandomListNode(pHead->label);
        		tmp[pHead] = p;
        	}
        	if(pre != NULL)
        	{
        		pre->next = p;
        	}
        	if(pHead->random)
        	{
        		if(tmp.find(pHead->random) != tmp.end())
	        	{
	        		rand = tmp[pHead->random];
	        	}
	        	else
	        	{
	        		rand = new RandomListNode(pHead->random->label);
	        		tmp[pHead->random] = rand;
	        	}
	        	p->random = rand;
        	}
        	pHead = pHead->next;
        	pre = p;
        }
        return head;
    }
};