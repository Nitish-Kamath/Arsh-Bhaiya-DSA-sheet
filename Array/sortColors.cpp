
// https://leetcode.com/problems/sort-colors/

void insertion_sort(vector<int> &nums, int len)
{
    int i, j;
    for (i = 1; i < len; i++)
    {

        int temp = nums[i];
        for (j = i - 1; j >= 0 && temp < nums[j]; j--)
        {
            nums[j + 1] = nums[j];
        }
        nums[j + 1] = temp;
    }
}
    

class Solution {
//     in place means that merge sort in not allowed
  

public:
    void sortColors(vector<int>& nums) {
        
    // karna kya chahte ho :)

    // since we are not allowed to use sort funcion
    // so in this case we will use insertion sort
    
    // here we are using insertion sort
    // best case O(n) otherwise O(n^2) and
    // space complexity O(1)


    int len = nums.size();

    insertion_sort(nums, len);

}
        
    
};