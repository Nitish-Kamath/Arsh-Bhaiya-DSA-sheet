// https://leetcode.com/problems/move-zeroes/


class Solution {
public:
    void moveZeroes(vector<int>& nums) {

// KARNA KYA CHAHTE HO :)
//         ek vector banana hai and then usme saare non zero element ko put karenge and 
//         at end saare zero element ko put kar denge

    int len = nums.size();
    //

    vector<int> pos;
    for (int i = 0; i < len; i++)
    {
        if (nums[i] != 0)
            pos.push_back(nums[i]);
    }

    int reqLen = pos.size();
    int k = 0;

    for (int i = 0; i < len; i++)
    {
        if (i < reqLen)
            nums[i] = pos[k++];
        else
            nums[i] = 0;
    }
 

    }
};