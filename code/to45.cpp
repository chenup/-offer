class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
        if(numbers.size() == 0)
        {
        	return false;
        }
        sort(numbers.begin(), numbers.end());
        int cost = 0;
        int cnt = 0;
        int pre = -1;
        for(auto it : numbers)
        {
        	if(it == 0)
        	{
        		cost++;
                continue;
        	}
        	if(pre == -1)
        	{
        		pre = it;
        	}
        	else if(it > pre)
        	{
        		cnt = cnt + it - pre - 1;
        		pre = it;
        	}
            else
            {
                return false;
            }
        }
        return cost >= cnt;
    }
};