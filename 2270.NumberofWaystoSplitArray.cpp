class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int res = 0;
        if(nums.size() == 2){
            if(nums[0] >= nums[1]) return 1;
            return 0;
        }
        long long int left = nums[0];
        long long int right = 0;
        for(int i = 1; i < nums.size(); i++) right += nums[i];
        
        for(int i = 1; i < nums.size(); i++){
            if (left >= right) res += 1;
            left = left + nums[i];
            right =  right - nums[i];
        }
        return res;
    }
};
