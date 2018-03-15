class Solution {
public:
    void reOrderArray(vector<int> &array) {
       	int pos = 0;
       	vector<int> tmp;
       	for(int i = 0; i < array.size(); i++)
       	{
       		if(array[i] % 2)
       		{
       			if(i > pos)
       			{
       				array[pos++] = array[i];
       			}
       			else if(i == pos)
       			{
       				pos++;
       			}
       		}
       		else
       		{
       			tmp.push_back(array[i]);
       		}
       	}
       	for(auto it : tmp)
       	{
       		array[pos++] = it;
       	}
    }
};