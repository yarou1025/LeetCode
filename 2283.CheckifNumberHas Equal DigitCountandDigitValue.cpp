class Solution {
public:
    bool digitCount(string num) {
        map<int, int> cnt;
        for(int i = 0; i < num.length(); i++){
            if(cnt.find(num[i]-'0') == cnt.end())
                cnt[num[i]-'0'] = 1;
            else
                cnt[num[i]-'0'] += 1;
        }
        for(int i = 0; i < num.length(); i++){
            if(cnt[i] != (num[i] - '0')) return false;
        }
        return true;
    }
};
