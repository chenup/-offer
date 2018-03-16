#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
#include <algorithm>
using namespace std;

/* 快排
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> res;
        if(k == 0 || k > input.size())
        {
        	return res;
        }
        helper(res, input, 0, input.size() - 1,k);
        return res;
    }
    void helper(vector<int>& res, vector<int>& input, int lo, int hi, int k)
    {
    	if(res.size() >= k)
    	{
    		return;
		}
		if(lo > hi)
    	{
    		return;	
    	}
    	if(lo == hi)
    	{
    		res.push_back(input[lo]);
    		return;	
    	}
    	int sep = input[lo];
    	int left = lo;
    	int right = hi;
    	int flag = true;
    	while(left < right)
    	{
    		if(flag)
    		{
    			if(input[right] < sep)
    			{
    				input[left] = input[right];
    				left++;
    				flag = false;
    			}
    			else
    			{
    				right--;
    			}
    		}
    		else
    		{
    			if(input[left] > sep)
    			{
    				input[right] = input[left];
    				right--;
    				flag = true;
    			}
    			else
    			{
    				left++;
    			}
    		}
    	}
    	input[left] = sep;
    	helper(res, input, lo, left - 1, k);
    	if(res.size() < k)
    	{
    			res.push_back(sep);
		}
    
    	helper(res, input, left + 1, hi, k);
    	
    }
};
*/

//最大堆
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) 
    {
    	vector<int> res;
    	if(k > input.size() || k == 0)
    	{
    		return res;
    	}
    	vector<int> maxHeap(k, 0);
    	for(int i = 0; i < k; i++)
    	{
    		maxHeap[i] = input[i];
    	}
    	for(int i = (maxHeap.size() - 1) / 2; i >= 0; i--)
    	{
    		addjustHeap(maxHeap, i);
    	}
    	for(int i = k; i < input.size(); i++)
    	{
    		if(input[i] < maxHeap[0])
    		{
    			maxHeap[0] = input[i];
    			addjustHeap(maxHeap, 0);
    		}
    	}
    	for(int i = 0; i < k; i++)
    	{
    		res.push_back(maxHeap[i]);

    	}
    	return res;
    }

    void addjustHeap(vector<int>& maxHeap, int i)
    {
    	int index = i;
    	int lChild = 2 * i + 1;
    	int rChild = 2 * i + 2;
    	if(index <= (maxHeap.size() - 1) / 2)
    	{
    		if(lChild < maxHeap.size() && maxHeap[index] < maxHeap[lChild])
    		{
    			index = lChild;
    		}
    		if(rChild < maxHeap.size() && maxHeap[index] < maxHeap[rChild])
    		{
    			index = rChild;
    		}

    	}
    	if(i != index)
    	{
    		int tmp = maxHeap[i];
    		maxHeap[i] = maxHeap[index];
    		maxHeap[index] = tmp;
    		addjustHeap(maxHeap, index);
    	}
    }
};

int main()
{
	//vector<int> rotateArray = {4,4,4,4,4,1,4};
	//string str = "abcc";
	vector<int> input = {3, 5, 8, 2, 1}; 
	vector<int> res = Solution().GetLeastNumbers_Solution(input, 2);
	for(auto it : res)
	{
		cout << it << endl;
	}
	return 0;
}