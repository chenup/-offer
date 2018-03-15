#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
 
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
    	if(rotateArray.size() == 0)
    	{
    		return 0;
		}
        return helper(rotateArray, 0, rotateArray.size() - 1);
    }

    int helper(vector<int>& rotateArray, int lo, int hi)
    {
    	if(lo == hi)
    	{
    		return rotateArray[lo];
    	}
    	int mid = lo + (hi - lo) / 2;
    	int left = -1, right = -1;
    	if(rotateArray[mid] <= rotateArray[hi])
    	{
    		left = helper(rotateArray, lo, mid);
		}
    	if(rotateArray[mid] >= rotateArray[hi])
    	{
    		right = helper(rotateArray, mid + 1, hi);
    	}
    	if(left == -1)
    	{
    		return right;
		}
		else if(right == -1)
		{
			return left;
		}
    	return min(left, right);
    }
};

int main()
{
	vector<int> rotateArray = {4,4,4,4,4,1,4}; 
	cout << Solution().minNumberInRotateArray(rotateArray);
	return 0;
}