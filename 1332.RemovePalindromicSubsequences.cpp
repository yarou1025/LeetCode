class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.length() == 0) return 0;
        for(int i = 0; i < s.length()/2; i++){
            if(s[i] != s[s.length() - 1 - i]) return 2;
        }
        return 1;
    }
};
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove Palindromic Subsequences.
Memory Usage: 6.1 MB, less than 78.83% of C++ online submissions for Remove Palindromic Subsequences.
