class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
       	vector<vector<int> > res;
       	if(sum < 1)
       	{
       		return res;
       	}
       	int left = 1;
       	int n = sum / 2 + 1;
       	int right = 2;
       	int cnt = 3;
       	while(right <= n && left < right)
       	{
       		if(cnt == sum)
       		{
       			vector<int> tmp;
       			for(int i = left; i <= right; i++)
       			{
       				tmp.push_back(i);
       			}
       			res.push_back(tmp);
       			cnt -= left;
       			left++;
       		}
       		else if(cnt < sum)
       		{
       			right++;
       			cnt += right;
       		}
       		else
       		{
       			cnt -= left;
       			left++;
       		}
       	}
       	return res;
    }
};