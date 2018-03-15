class Solution {
public:
	void replaceSpace(char *str,int length) {
		int cnt = 0;
		for(int i = 0; i < length; i++)
		{
			if(str[i] == ' ')
			{
				cnt++;
			}
		}
		int len = cnt * 2 + length;
		str[len] = '\0';
		int k = 1;
		while(cnt > 0)
		{
			if(str[length - k] == ' ')
			{
				cnt--;
				str[--len] = '0';
				str[--len] = '2';
				str[--len] = '%';
			}
			else
			{
				str[--len] = str[length - k];
			}
			k++;
		}
		return;
	}
};