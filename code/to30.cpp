//非动规
/*
class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        if(array.size() == 0)
        {
        	return 0;
        }
        int max = array[0];
        int sum = 0;
       	for(auto it : array)
       	{
       		sum += it;
       		if(it > sum)
       		{
       			sum = it;
       		}
       		if(sum > max)
       		{
       			max = sum;
       		}
       	}
       	return max;
    }
};
*/

//动态规划
class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) 
    {
    	if(array.size() == 0)
    	{
    		return 0;
    	}
    	vector<int> dp(array.size(), 0);
    	dp[0] = array[0];
    	int max = array[0];
    	for(int i = 1 ; i < array.size(); i++)
    	{
    		if(dp[i - 1] > 0)
    		{
    			dp[i] = dp[i - 1] + array[i];
    		}
    		else
    		{
    			dp[i] = array[i];
    		}
    		if(max < dp[i])
    		{
    			max = dp[i];
    		}
    	}
    	return max;
    }
};