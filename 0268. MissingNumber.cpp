class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.size() == 1){
            if(nums[0] != 0) return 0;
            else return 1;
        }
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != i){
                return i;
            }
        }
        return nums.size();
    }
};
Runtime: 43 ms, faster than 13.85% of C++ online submissions for Missing Number.
Memory Usage: 17.9 MB, less than 93.84% of C++ online submissions for Missing Number.
