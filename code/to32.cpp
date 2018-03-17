bool compare(const int& a,  const int& b)
{
	string A = to_string(a) + to_string(b);
	string B = to_string(b) + to_string(a);
	return A > B;
}
    
class Solution {
public:
    string PrintMinNumber(vector<int> numbers) {
        string res = "";
        sort(numbers.begin(), numbers.end(), compare);
        for(auto it : numbers)
        {
        	res = to_string(it) + res;
        }
        return res;
    }
};
