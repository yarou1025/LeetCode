class Solution {
public:
    int mySqrt(int x) {
        int now = sqrt(x);
        while(x < now*now){
            now -= 1;
        }
        return now;
    }
};
Runtime: 3 ms, faster than 68.51% of C++ online submissions for Sqrt(x).
Memory Usage: 5.9 MB, less than 74.33% of C++ online submissions for Sqrt(x).
