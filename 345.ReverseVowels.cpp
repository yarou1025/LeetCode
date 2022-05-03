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
        // for(int i = 0; i < s.length(); i++){
        //     if(t.find(s[i]) != string::npos)
        //         tmp.push_back(i);
        // }
        // for(int i = 0; i < tmp.size()/2; i++){
        //     swap(s[tmp[i]], s[tmp[tmp.size() - 1 -i]]);
        // }
        return s;
    }
 
    // public:
    //     string reverseVowels(string s) {
    //     int left = 0, right = s.size() - 1;
    //     string t = "aeiouAEIOU";
    //     while (left < right) {
    //         if (t.find(s[left]) == string::npos) ++left;
    //         else if (t.find(s[right]) == string::npos) --right;
    //         else swap(s[left++], s[right--]);
    //     }
    //     return s;
    // }
};
