//vector底层实现是红黑树
/*
class Solution {
public:
    void Insert(int num)
    {
        tmp.push_back(num);
    }

    double GetMedian()
    { 
        sort(tmp.begin(), tmp.end());
        int len = tmp.size();
        if(len % 2 == 0)
        {
            return (tmp[len / 2 - 1] + tmp[len / 2]) / 2.0;
        }
        else
        {
            return tmp[len / 2];
        }
    }
private:
    vector<int> tmp;
};
*/

//最大堆和最小堆

class Solution()
{
public:
    void Insert(int num)
    {
        if(maxheap.empty() || num < maxheap.top())
        {
            maxheap.push(num);
        }
        else
        {
            minheap.push(num);
        }
        if(maxheap.size() == minheap.size() + 2)
        {
            minheap.push(maxheap.top());
            maxheap.pop();
        }
        else if(minheap.size() > maxheap.size())
        {
            maxheap.push(minheap.top());
            minheap.pop();
        }
    }

    double GetMedian()
    {
        int sum = minheap.size() + maxheap.size();
        if(sum % 2)
        {
            return minheap.top();
        }
        else
        {
            return (minheap.top() + maxheap.top()) / 2.0
        }
    }
private:
    priority_queue<int, vector<int>, less<int>> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;
};