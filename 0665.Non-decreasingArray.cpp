class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] > nums[i]){
                vector<int> tmp1(nums), tmp2(nums);
                tmp1.erase(tmp1.begin()+i);
                tmp2.erase(tmp2.begin()+i-1);
                return (check_all(tmp1) or check_all(tmp2));
            }
        }
        return true;
    }
    bool check_all(vector<int> nums){
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] > nums[i]) return false;
        }
        return true;
    }
};
Runtime: 48 ms, faster than 21.68% of C++ online submissions for Non-decreasing Array.
Memory Usage: 29.9 MB, less than 5.18% of C++ online submissions for Non-decreasing Array.
