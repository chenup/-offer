class Solution {
public:
    string LeftRotateString(string str, int n) {
        int l = str.size();
        if(l == 0 || l == 1)
        {
        	return str;
        }
        int k = n % l;
        if(k == 0)
        {
        	return str;
        }
        string res = str.substr(k, l - k) + str.substr(0, k);
        return res;
    }
};