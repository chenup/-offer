class Solution {
public:
    int FirstNotRepeatingChar(string str) {
    	if(str == "")
    	{
    		return -1;
    	}
        vector<int> Acnt(26, 0);
        vector<int> acnt(26, 0);
        vector<int> Aidx(26, -1);
        vector<int> aidx(26, -1);
        for(int i = 0; i < str.size(); i++)
        {
        	if('a' <= str[i] && str[i] <= 'z')
        	{
        		acnt[str[i] - 'a']++;
        		aidx[str[i] - 'a'] = i;
        	}
        	else if('A' <= str[i] && str[i] <= 'Z')
        	{
        		Acnt[str[i] - 'A']++;
        		Aidx[str[i] - 'A'] = i;
        	}
        }
        int min = str.size();
        for(int i = 0; i < 26; i++)
        {
        	if(acnt[i] == 1 && min > aidx[i])
        	{
        		min = aidx[i];
        	}
        	if(Acnt[i] == 1 && min > Aidx[i])
        	{
        		min = Aidx[i];
        	}
        }
        return min;
    }
};