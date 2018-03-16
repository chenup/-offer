class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
    	if(numbers.size() == 0)
    	{
    		return 0;
    	}
    	int cnt = 0;
    	int res = 0;
    	for(auto it : numbers)
    	{
    		if(cnt == 0)
    		{
    			cnt++;
    			res = it;
    		}
    		else if(res == it)
    		{
    			cnt++;
    		}
    		else
    		{
    			cnt--;
    		}
    	}
    	int sum = 0;
    	for(auto it : numbers)
    	{
    		if(res == it)
    		{
    			sum++;
    		}
    	}
    	if(sum > numbers.size() / 2)
    	{
    		return res;
    	}
    	return 0;
    }
};