class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
    	int n = data.size();
    	if(n == 0 || n == 1)
    	{
    		*num1 = 0;
    		*num2 = 0;
    		return;
    	}
    	int res = 0;
    	for(auto it : data)
    	{
    		res ^= it;
    	}
    	int a = 0;
    	int b = 0;
    	int i = 0;
    	while(true)
    	{
    		if(res & 1)
    		{
    			break;
    		}
    		res >>= 1;
    		i++;
    	}
    	for(auto it : data)
    	{
    		if(it & (1 << i))
    		{
    			a ^= it;
    		}
    		else
    		{
    			b ^= it;
    		}
    	}
    	*num1 = a;
    	*num2 = b;
    }
};