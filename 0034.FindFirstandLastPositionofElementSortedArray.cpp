class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) return vector<int>(2,-1);
        vector<int> res;
        auto ll = lower_bound(nums.begin(), nums.end(), target);
        auto up = upper_bound(nums.begin(), nums.end(), target);
        if(ll == nums.end()) return vector<int>(2,-1);
        else if(nums[ll-nums.begin()] == target){
            res.push_back(ll-nums.begin());
            if(up == nums.end())
               res.push_back(up-nums.begin()-1);
            else if(nums[up-nums.begin()] == target)
                res.push_back(up-nums.begin());
            else
                res.push_back(up-nums.begin()-1);
            return res;
        }
        return vector<int>(2,-1);
    }
};
Runtime: 9 ms, faster than 68.81% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
Memory Usage: 13.7 MB, less than 63.83% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
