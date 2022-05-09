class Solution {
public:
    string frequencySort(string s) {
        map<char, int> cnt;
        for(int i = 0 ; i < s.length(); i++){
            
            if(cnt.find(s[i]) == cnt.end()){
                cnt[s[i]] = 1;
            }
            else{
                cnt[s[i]] += 1;
            }
        }
        vector<pair<char, int> > arr;
        for (const auto &item : cnt) {
            arr.push_back(item);
        }
        
        sort(arr.begin(), arr.end(),  [] (const auto &x, const auto &y) {return x.second > y.second;});
        
        string str = "";
        for(int i = 0; i < arr.size(); i++){
            while(arr[i].second-- > 0)
                str += arr[i].first;
        }
        return str;
    }
};
