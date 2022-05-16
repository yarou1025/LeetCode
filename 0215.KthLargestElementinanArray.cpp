lass Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size() == 1) return nums[0];
        if(k < nums.size()/2){
            for(int i = 0; i< k-1; i++){
                auto my_max = max_element(nums.begin(), nums.end());
                // cout << *my_max << endl;
                nums.erase(my_max);    
            }
            auto my_max = max_element(nums.begin(), nums.end());
            return *my_max;
        }
        else{
            int tmp = nums.size() - k;
            for(int i = tmp; i > 0; i--){
                auto my_min = min_element(nums.begin(), nums.end());
                // cout << i <<": " << *my_min << endl;
                nums.erase(my_min);    
    
            }
            auto my_min = min_element(nums.begin(), nums.end());
            return *my_min;
            
        }
        return 0;
    }
};
Runtime: 54 ms, faster than 13.30% of C++ online submissions for Kth Largest Element in an Array.
Memory Usage: 9.8 MB, less than 97.42% of C++ online submissions for Kth Largest Element in an Array.
