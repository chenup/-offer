class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
    	if(data.size() == 0)
    	{
    		return 0;
    	}
  		int res = countNum(data, 0, data.size() - 1, k);
  		return res;      
    }

    int countNum(vector<int>& data, int lo, int hi, int k)
    {
    	if(lo > hi)
    	{
    		return 0;
    	}
    	int mid = lo + (hi - lo) / 2;
    	if(data[mid] == k)
    	{
    		return 1 + countNum(data, lo, mid - 1, k) + countNum(data, mid + 1, hi, k);
    	}
    	else if(data[mid] > k)
    	{
    		return countNum(data, lo, mid - 1, k);
    	}
    	else
    	{
    		return countNum(data, mid + 1, hi, k);
    	}
    }
};