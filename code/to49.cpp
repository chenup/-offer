class Solution {
public:
    int StrToInt(string str) {
    	if(str == "")
    	{
    		return 0;
    	}
        int flag = 1;
        int i = 0;
        if((str[0] == '+' || str[0] == '-') && str.size() > 1)
        {
        	flag = (str[0] == '+'? 1 : -1);
        	i = 1;
        }
        int num = 0;
        if(helper(str, i, num))
        {
        	return flag * num;
        }
        return 0;
    }

    bool helper(string str, int i, int& num)
    {
    	if(i >= str.size())
    	{
    		return true;
    	}
    	char c = str[i];
    	if(c >= '0' && c <= '9')
    	{
    		num = num * 10 + c - '0';
    		return helper(str, i + 1, num);
    	}
    	return false;
    }
};