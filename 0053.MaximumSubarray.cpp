class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int max_value = nums[0];
        int tot = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(tot < 0) tot = 0;
            tot += nums[i];
            if(tot > max_value) max_value = tot;
        }
        return max_value;
    }
};
Runtime: 220 ms, faster than 7.24% of C++ online submissions for Maximum Subarray.
Memory Usage: 67.7 MB, less than 91.10% of C++ online submissions for Maximum Subarray.
