// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        

    // constant extra space
    // using hashmap
    // basic intuition
    // put all unique element in hashmap
    // then put unique element in orginal array
    // return org array with size of hashmap

    map<int, int> hmap;
    int count = 0;

    int len = nums.size();

    for (auto item : nums)
    {
        if (hmap[item] == 0)
        {
            hmap[item]++;
            count++;
        }
    }

    

    int k = 0;
    for (auto x : hmap)
    {
        // cout << x.first << endl;
        nums[k++] = x.first;
    }
        return count;

        
    }
};