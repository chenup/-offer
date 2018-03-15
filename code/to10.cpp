class Solution {
public:
    int rectCover(int number) {
    	if(number == 0)
        {
        	return 0;
        }
        if(number == 1)
        {
        	return 1;
        }
        if(number == 2)
        {
        	return 2;
        }
        int a = 1; 
        int b = 2;
        int res;
        for(int i = 3; i <= number; i++)
        {
        	res = a + b;
        	a = b;
        	b = res;
        }
        return res;
    }
};