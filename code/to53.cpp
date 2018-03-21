class Solution {
public:
    bool isNumeric(char* string)
    {
    	int k;
    	int i = 0;
    	if(string[i] == '\0')
    	{
    		return false;
    	}
    	if(string[i] == '+' || string[i] == '-')
    	{
    		i++;
    	}
    	k = passDigit(string + i);
    	i = i + k;
		if(string[i] == '.')
    	{
    		i++;
    		k = passDigit(string + i);
    		if(k == 0)
    		{
    			return false;
    		}
    		i = i + k;
    	}
    	if(string[i] == 'e' || string[i] == 'E')
    	{
    		i++;
    		if(string[i] == '+' || string[i] == '-')
    		{
    			i++;
    		}
    		k = passDigit(string + i);
    		if(k == 0)
    		{
    			return false;
    		}
    		i = i + k;
    	}
    	if(string[i] == '\0')
    	{
    		return true;
    	}
    	return false;      
    }

    int passDigit(char* str)
    {
    	int i = 0;
    	while(str[i] != '\0')
    	{
    		if(str[i] >= '0' && str[i] <= '9')
    		{
    			i++;
    		}
    		else
    		{
    			return i;
    		}
    	}
    	return i;
    }
};