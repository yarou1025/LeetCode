class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int p_min = prices[0];
        for(int i = 1; i < prices.size();i++){
            if(prices[i] < p_min){
                p_min = prices[i];
                continue;
            }
            while(i < prices.size() - 1 and prices[i + 1] >= prices[i]){
                i++;  
            }
            res += prices[i] - p_min;
            p_min = prices[i];
        }
        return res;
    }
};
Runtime: 14 ms, faster than 26.40% of C++ online submissions for Best Time to Buy and Sell Stock II.
Memory Usage: 13 MB, less than 88.48% of C++ online submissions for Best Time to Buy and Sell Stock II.
