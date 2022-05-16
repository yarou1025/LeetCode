class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int res = 0;
        
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        for(int i = 0, j = 0; i < g.size() and j < s.size();){
            if(g[i] <= s[j]){ 
                res += 1;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return res;
    }
};
Runtime: 40 ms, faster than 42.17% of C++ online submissions for Assign Cookies.
Memory Usage: 17.3 MB, less than 97.51% of C++ online submissions for Assign Cookies.
