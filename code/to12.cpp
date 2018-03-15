class Solution {
public:
    double Power(double base, int exponent) {
        if(exponent == 0)
        {
            return 1;
        }
        if(exponent < 0)
        {
        	return 1 / Power(base, -1 * exponent);
        }
        if(exponent % 2)
        {
        	return Power(base, exponent / 2) * Power(base, exponent / 2) * base;
        }
        else
        {
        	return Power(base, exponent / 2) * Power(base, exponent / 2);
        }
    }
};