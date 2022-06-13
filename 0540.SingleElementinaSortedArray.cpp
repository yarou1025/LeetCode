class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int, int> my_map;
        for(int i = 0; i < nums.size(); i++){
            if(my_map.find(nums[i]) == my_map.end()){
                my_map[nums[i]] = 1;
            }
            else{
                my_map[nums[i]] += 1;
            }
        }
        for(auto p: my_map){
            if(p.second == 1) return p.first;
        }
        return -1;
    }
};
Runtime: 167 ms, faster than 5.44% of C++ online submissions for Single Element in a Sorted Array.
Memory Usage: 28.1 MB, less than 9.10% of C++ online submissions for Single Element in a Sorted Array.
