class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        int r = n;
        while(l < r){
            int m = l+(r-l)/2;
            if(isBadVersion(m))
                r = m;
            else
                l = m + 1;
        }
        return l;
    }
};
Runtime: 0 ms, faster than 100.00% of C++ online submissions for First Bad Version.
Memory Usage: 5.7 MB, less than 88.91% of C++ online submissions for First Bad Version.
