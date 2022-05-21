class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](auto &a, auto &b){
            if(a[1] < b[1]) return true;
            return false;
        });
        int res = 1;
        int next_start = points[0][1];
        for(auto v: points){
            if(v[0] > next_start){  
                next_start = v[1];
                res += 1;
            }
        }
        
        return res;
    }
};
Runtime: 555 ms, faster than 59.77% of C++ online submissions for Minimum Number of Arrows to Burst Balloons.
Memory Usage: 102.4 MB, less than 5.11% of C++ online submissions for Minimum Number of Arrows to Burst Balloons.
