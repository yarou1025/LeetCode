class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int l = 0, h = n - 1;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (letters[mid] <= target) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        return l < n ? letters[l] : letters[0];
    }
};
Runtime: 26 ms, faster than 32.72% of C++ online submissions for Find Smallest Letter Greater Than Target.
Memory Usage: 15.8 MB, less than 90.80% of C++ online submissions for Find Smallest Letter Greater Than Target.
