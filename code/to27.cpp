class Solution {
public:
    vector<string> Permutation(string str) {
        vector<string> res;
        if(str == "")
        {
        	return res;
        }
        vector<char> tmp;
        for(auto it : str)
        {
        	tmp.push_back(it);
        }
        sort(tmp.begin(), tmp.end());
        string seq = ""
        helper(res, tmp, "");
        return res;
    }

    void helper(vector<string> &res, vector<char> &tmp, string seq)
    {
    	if(tmp.empty())
    	{
    		res.push_back(tmp);
    	}
    	for(int i = 0; i < tmp.size(); i++)
    	{
    		if(i == 0 || tmp[i] != tmp[i - 1])
    		{
    			auto it = tmp.erase(tmp.begin() + i);
    			string tmpStr = seq + tmp[i];
    			helper(res, tmp, tmpStr);
    			tmp.insert(it);
    		}
    	}
    }
};