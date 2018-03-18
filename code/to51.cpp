class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
    	int n = A.size();
    	vector<int> B;
    	if(n == 0)
    	{
    		return B;
    	}
        B = vector<int>(n, 1);
    	for(int i = 1; i < n; i++)
    	{
    		B[i] = B[i - 1] * A[i - 1];
    	}
    	int tmp = 1;
    	for(int i = n - 1; i >= 0; i--)
    	{
    		B[i] *= tmp;
    		tmp *= A[i];
    	}
    	return B;
    }
};