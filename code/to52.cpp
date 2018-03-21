class Solution {
public:
    bool match(char* str, char* pattern)
    {
    	if(*str == '\0' && *pattern == '\0')
    	{
    		return true;
    	}
    	if(*str == '\0' || *pattern == '\0')
    	{
    		return false;
    	}
    	if(*(pattern + 1) == '*')
    	{
    		if(*pattern != *str)
    		{
    			return match(str, pattern + 2);
    		}
    		return match(str, pattern + 2) || match(str + 1, pattern) || match(str + 1, pattern + 2);
    	}
    	if(*pattern != '.' && *pattern != *str)
    	{
    		return false;
    	}
    	return match(str + 1, pattern + 1);
    }
};