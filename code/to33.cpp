class Solution {
public:
    int GetUglyNumber_Solution(int index) {
    	if(index == 0)
    	{
    		return 0;
    	}
    	vector<int> tmp(1, 1);
    	int pos1 = 0;
    	int pos2 = 0;
    	int pos3 = 0;
    	int n1 = 1;
    	int n2 = 1;
    	int n3 = 1;
    	int m = 1;
    	for(int i = 2; i <= index; i++)
    	{	
    		if(n1 == m)
    		{
    			n1 = tmp[pos1++] * 2;
    		}
    		if(n2 == m)
    		{
    			n2 = tmp[pos2++] * 3;
    		}
    		if(n3 == m)
    		{
    			n3 = tmp[pos3++] * 5;
    		}
    		m = min(n1, min(n2, n3));
    		tmp.push_back(m);
    	}
    	return tmp.back();
    }
};
