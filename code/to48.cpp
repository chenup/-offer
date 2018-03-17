class Solution {
public:
    int Add(int num1, int num2)
    {
    	int tmp;
        while(num1)
        {
        	tmp = num1;
        	num1 = (num1 & num2) << 1;
        	num2 = num2 ^ tmp; 
        }
        return num2;
    }
};