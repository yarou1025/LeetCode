class Solution {
public:
    bool judgeSquareSum(int c) {
        int i = 0;
        int j = sqrt(c);
        if(j*j == c) return true;
        while(i <= j){
            double res = sqrt(c - i*i);
            if(res == j) return true;
            else if(res > j) i++;
            else j--;
        }
        return false;
    }
}
Runtime: 6 ms, faster than 40.87% of C++ online submissions for Sum of Square Numbers.
Memory Usage: 5.7 MB, less than 89.32% of C++ online submissions for Sum of Square Numbers.
    
