class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        stack<int> tmp;
        int i = 0;
        int j = 0;
        while(i < pushV.size() && j < popV.size())
        {
        	if(pushV[i] == popV[j])
        	{
        		i++;
        		j++;
        	}
        	else if(tmp.size() > 0 && tmp.top() == popV[j])
        	{
        		tmp.pop();
        		j++;
        	}
        	else
        	{
        		tmp.push(pushV[i]);
        		i++;
        	}
        }
        while(j < popV.size())
        {
        	if(tmp.size() == 0 || tmp.top() != popV[j])
        	{
        		return false;
        	}
            else
            {
                tmp.pop();
        		j++;
            }
        }
        return true;
    }
};