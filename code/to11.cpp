class Solution {
public:
     int  NumberOf1(int n) {
    	int cnt = 0;
    	while(n)
    	{
    		if(n & 0x80000000)
    		{
    			cnt++;
    		}
    		n = n << 1;
    	}
    	return cnt;
     }
};