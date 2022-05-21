class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b){
            if(a[1] < b[1]) return true;
            return false;
        });
        
        int res = 0;
        int next_start = -99999;
        for(auto v: intervals){
            if(v[0] < next_start){      
                res += 1;
            }
            else{
                next_start = v[1];
            }
        }
        return res;
    }
};
Runtime: 485 ms, faster than 76.74% of C++ online submissions for Non-overlapping Intervals.
Memory Usage: 102.6 MB, less than 8.62% of C++ online submissions for Non-overlapping Intervals.
