class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int res = 0;
        map<int, int> my_map;
        for(int i = 0;i < nums.size(); i++){
            if(my_map.find(nums[i]) == my_map.end()){
                my_map[nums[i]] = 1;
            }
            else{
                my_map[nums[i]] += 1;
            }
        }
        if(k%2 == 0)
            if(my_map.find(k/2) != my_map.end()){
                res += my_map[k/2]/2;
                my_map[k/2] = 0;
            }
        for(auto pr: my_map){
            
            int remain = k - pr.first;
            
            if(remain > pr.first and pr.second != 0 and 
               my_map.find(remain) != my_map.end() and
               my_map[remain] != 0){
                // cout << pr.first << ", " << remain << endl;
                int add = min(pr.second, my_map[remain]);
                // cout << "add: " << add << endl;
                res += add;
                pr.second -= add;
                my_map[remain] -= add;
            }
        }
        return res;
    }
};

Runtime: 333 ms, faster than 9.07% of C++ online submissions for Max Number of K-Sum Pairs.
Memory Usage: 68.2 MB, less than 32.58% of C++ online submissions for Max Number of K-Sum Pairs.
