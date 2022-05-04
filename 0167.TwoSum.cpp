class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while(target != numbers[left] + numbers[right]){
            int remain = target - numbers[left] - numbers[right];
            if(remain < 0) right--;
            else left++;
        }
        return vector<int> {left+1, right+1};
    }
};

Runtime: 21 ms, faster than 35.88% of C++ online submissions for Two Sum II - Input Array Is Sorted.
Memory Usage: 15.7 MB, less than 44.66% of C++ online submissions for Two Sum II - Input Array Is Sorted.
Next challenges:
