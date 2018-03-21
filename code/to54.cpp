class Solution
{
public:
	Solution(): id(0), aVec(vector<int>(256, 0)){}
  //Insert one char from stringstream
    void Insert(char ch)
    {
         if(aVec[ch] == 0)
         {
         	onceChar[ch] = id++;
         }
         else if(aVec[ch] == 1)
         {
         	onceChar.erase(ch);
         }
         aVec[ch]++;
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
        if(onceChar.empty())
        {
            return '#';
        }
        auto k = onceChar.begin();
    	char res = k->first; 
    	int min = k->second; 
    	for(auto it : onceChar)
    	{
    		if(min < it.second)
    		{
    			min = it.second;
    			res = it.first;
    		}
    	}
    	return res;
    }

private:
	int id;
	unordered_map<char, int> onceChar;
	vector<int> aVec;
};