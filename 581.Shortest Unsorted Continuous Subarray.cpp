class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> tmp;
        tmp.assign(nums.begin(), nums.end());
        sort(tmp.begin(), tmp.end());
        int left = -1, right = -1;
        for(int i = 0; i < tmp.size() and (left == -1 or right == -1); i++){
            if( left == -1 and tmp[i] != nums[i]) left = i;
            if( right == -1 and tmp[tmp.size() - i - 1] != nums[tmp.size() - i - 1]) right = tmp.size() - i - 1;
        }
        if(left == -1 and right == -1) return 0;
        return right - left + 1;
    }
};
