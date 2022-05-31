class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int need = 1 << k;
        set<string> now;
        for(int i = k; i <= s.length(); i++){
            string a = s.substr(i-k, k);
            // cout << a << endl;
            if(now.find(a) == now.end()){
                now.insert(a);
                need--;
                if(need == 0) return true;
            }
        }
        return false;
    }
};
Runtime: 1512 ms, faster than 5.97% of C++ online submissions for Check If a String Contains All Binary Codes of Size K.
Memory Usage: 91.3 MB, less than 17.92% of C++ online submissions for Check If a String Contains All Binary Codes of Size K.
