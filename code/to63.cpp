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