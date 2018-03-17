class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
       if(length == 0)
       {
       		return false;
       }
       for(int i = 0; i < length; i++)
       {
       		int k = numbers[i];
       		int j = k;
       		if(k == length)
       		{
       			j = 0;
       		}
       		else if(k < 0)
       		{
       			j = -1 * k;
       		}
       		else if(k > 0)
       		{
       			j = k;
       		}
       		if(numbers[j] == length || numbers[j] < 0)
       		{
       			*duplication = j;
       			return true;
       		}
       		else if(numbers[j] > 0)
       		{
       			numbers[j] = -1 * numbers[j];
       		}
       		else if(numbers[j] == 0)
       		{
       			numbers[j] = length;
       		}
       }
       return false;
    }
};