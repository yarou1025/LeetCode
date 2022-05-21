class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int p_min = prices[0];
        for(int i = 0; i < prices.size(); i++){
            if(p_min > prices[i])
                p_min = prices[i];
            else if(res < prices[i] - p_min)
                res = prices[i] - p_min;
        }
        return res;
    }
};
Runtime: 144 ms, faster than 78.73% of C++ online submissions for Best Time to Buy and Sell Stock.
Memory Usage: 93.4 MB, less than 13.10% of C++ online submissions for Best Time to Buy and Sell Stock.
