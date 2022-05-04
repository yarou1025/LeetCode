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

Runtime: 45 ms, faster than 45.23% of C++ online submissions for Shortest Unsorted Continuous Subarray.
Memory Usage: 27.4 MB, less than 46.64% of C++ online submissions for Shortest Unsorted Continuous Subarray.

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int go_right = 0, go_left = nums.size() - 1;
        int max = -99999, min = 99999;
        int start = 0, end = -1;
        while(go_left >= 0){
            if(nums[go_left] <= min)
                min = nums[go_left];
            else
                start = go_left;
            if(nums[go_right] >= max)
                max = nums[go_right];
            else
                end = go_right;
            go_left--;
            go_right++;
        }
        return end - start + 1;
    }
};

Runtime: 23 ms, faster than 97.89% of C++ online submissions for Shortest Unsorted Continuous Subarray.
Memory Usage: 26.4 MB, less than 98.71% of C++ online submissions for Shortest Unsorted Continuous Subarray.
