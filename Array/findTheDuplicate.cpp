// https://leetcode.com/problems/find-the-duplicate-number/


class Solution {
public:
    int findDuplicate(vector<int>& nums) {

//         basic intuition
//         you have to create a hashmap 
//         put all the number of array in that hasmap
//         if freq of number is 2 then that is our required element
//         check condition and return that element

    int len = nums.size();

    map<int, int> hmap;
    for (int i = 0; i < len; i++)
    {
        int val = nums[i];
        hmap[val]++;

        if (hmap[val] == 2)
        return val;
    }
        return 0;
    }
        

};