class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> cnt;
        for(int i = 0; i < nums.size(); i++){
            if(cnt.find(nums[i]) == cnt.end()){
                cnt[nums[i]] = 1;
            }
            else{
                cnt[nums[i]] += 1;
            }
        }       
        vector<pair<int, int> > arr;
        for (const auto &item : cnt) {
            arr.push_back(item);
        }
        
        sort(arr.begin(), arr.end(),  [] (const auto &x, const auto &y) {return x.second > y.second;});
        
        vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back(arr[i].first);
        }
        return res;
    }
};
