class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        vector<int> ans;
        
        while(true){
            int res = target - numbers[i] - numbers[j];
            if(res == 0){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }   
            else if(res > 0)
            {
                i++;
            }
            else{
                j--;
            }
        }
    }
};
