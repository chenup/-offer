class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
    	int m = n;
    	int res = 0;
    	int t = 1;
    	int a, b;
    	while(m)
    	{
    		int x = m % 10;
    		b = m;
 			m /= 10;
    		a = m * t;
    		if(x == 1)
    		{
    			res = res + 1 + n - b * t + a;
    		}
    		else if(x > 1)
    		{
    			res = res + t + a;
    		}
    		else
    		{
    			res = res + a;
    		}
    		t *= 10;
    	}
        return res;
   	}
};