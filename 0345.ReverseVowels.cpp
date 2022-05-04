class Solution {
public:
    string reverseVowels(string s) {
        string t = "aeiouAEIOU";
        int left = 0, right = s.length();
        
        while(left < right){
            if(t.find(s[left]) == string::npos) left++;
            else if(t.find(s[right]) == string::npos) right--;
            else swap(s[left++], s[right--]);
        }
        return s;
    }
};
Runtime: 9 ms, faster than 54.96% of C++ online submissions for Reverse Vowels of a String.
Memory Usage: 7.8 MB, less than 40.21% of C++ online submissions for Reverse Vowels of a String.
