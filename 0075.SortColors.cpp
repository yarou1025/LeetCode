class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> colors(300, 0);
        for(int i = 0; i < nums.size(); i++){
            colors[nums[i]] += 1;
        }
        int k = 0;
        for( int i = 0; i < 300; i++){
            for(int j = 0; j < colors[i]; j++){
                nums[k++] = i;
            }
        }
        
    }
};
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sort Colors.
Memory Usage: 8.5 MB, less than 25.30% of C++ online submissions for Sort Colors.
