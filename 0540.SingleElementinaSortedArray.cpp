class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int last = 0;
        for(int i = 0; i < nums.size(); i++){
           last^=nums[i];
        }
        return last;
    }
};
Runtime: 44 ms, faster than 31.02% of C++ online submissions for Single Element in a Sorted Array.
Memory Usage: 22.4 MB, less than 54.94% of C++ online submissions for Single Element in a Sorted Array.
