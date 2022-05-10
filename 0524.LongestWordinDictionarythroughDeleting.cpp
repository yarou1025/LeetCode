class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        string longest = "";
        for(int i = 0; i < dictionary.size(); i++){
            if(dictionary[i].length() >= longest.length()){
                if(check_contains(s, dictionary[i])){
                    if(dictionary[i].length() > longest.length())
                        longest = dictionary[i];
                    else if(longest > dictionary[i]) longest = dictionary[i];
                }
            }
            
        }
        return longest;
    }
    bool check_contains(string &ans, string &can){
        int i = 0;
        int j = 0;
        while(i < ans.length() and j < can.length()){
           if(ans[i++] == can[j]){
               j++;
           } 
        }
        if(j != can.length()) return false;
        else return true;
    }
};
Runtime: 60 ms, faster than 91.26% of C++ online submissions for Longest Word in Dictionary through Deleting.
Memory Usage: 14.8 MB, less than 98.96% of C++ online submissions for Longest Word in Dictionary through Deleting.
