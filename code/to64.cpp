// 双指针，空间复杂度O(1),时间复杂度大于O(n)
/*
class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
       	vector<int> res;
       	if(num.size() == 0 || size > num.size() || size == 0)
       	{
       		return res;
       	}
       	if(size == 1)
       	{
       		return num;
       	}
       	int first = 0;
       	int second = 0;
       	int max = num[0];
       	int max_pos = 0;
       	while(first < size)
       	{
       		if(max < num[first])
       		{
       			max = num[first];
       			max_pos = max;
       		}
       		first++;
       	}
       	second = max_pos;
       	res.push_back(max);
       	while(first < num.size())
       	{
       		if(num[first] >= max)
       		{
       			max = num[first];
       			res.push_back(max);
       			first++;
       			continue;
       		}
       		else if(second > first - size)
       		{
       			res.push_back(max);
       			first++;
       			continue;
       		}
       		second = first - size + 1;
       		max = num[second];
       		while(second <= first)
       		{
       			if(max < num[second])
       			{
       				max = num[second];
       				max_pos = second;
       			}
       			second++;
       		}
       		res.push_back(max);
       		second = max_pos;
       		first++;
       	}
       	return res;
    }	
};
*/

//双端队列，空间复杂度O(n)，时间复杂度O(n)
