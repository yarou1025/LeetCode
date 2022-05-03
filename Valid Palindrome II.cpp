class Solution {
public:
    int len;
    bool validPalindrome(string s) {
        len = s.length();
        for(int i = 0; i < len/2; i++){
            if(s[i] != s[len-i-1]){
                string ss = s.substr(i, len-2*i-1);
                bool res = validPalindrome_unit(ss);
                if(res) return true;
                ss = s.substr(i+1, len-2*i-1);
                res = validPalindrome_unit(ss);
                if(res) return true;
                return false;
            }
        }
        return true;
    }
    bool validPalindrome_unit(string s) {
        for(int i = 0; i < s.length()/2; i++){
            if(s[i] != s[s.length()-i-1]){
                return false;
            }
        }
        return true;
    }
};
