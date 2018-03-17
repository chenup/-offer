class Solution {
public:
    int InversePairs(vector<int> data) {
        int sum = mergeCount(data, 0, data.size() - 1);
		return sum;
    }

    int mergeCount(vector<int>& data, int lo, int hi)
    {
    	if(lo >= hi)
    	{
    		return 0;
    	}
    	int mid = lo + (hi - lo) / 2;
    	int sum = mergeCount(data, lo, mid) + mergeCount(data, mid + 1, hi); 
    	sum %= 1000000007;
    	int left = lo;
    	int right = mid + 1;
    	vector<int> tmp;
    	while(left <= mid && right <= hi)
    	{
    		if(data[left] > data[right])
    		{
    			sum += (mid - left + 1);
    			sum %= 1000000007;
    			tmp.push_back(data[right++]);
    		}
    		else
    		{
    			tmp.push_back(data[left++]);
    		}
    		
    	}
    	while(left <= mid)
		{
			tmp.push_back(data[left++]);
		}
		while(right <= hi)
		{
			tmp.push_back(data[right++]);
		}
		for(auto it : tmp)
		{
			data[lo++] = it;
		}
    	return sum;
    }
};