class Solution {
public:
    vector<int> diffWaysToCompute(string input){
        vector<int> res;
        for(int i = 0; i < input.length(); i++){
            if(input[i] == '+' or input[i] == '-' or input[i] == '*'){
                vector<int> left = diffWaysToCompute(input.substr(0, i));
                vector<int> right = diffWaysToCompute(input.substr(i+1));
                for (int l : left) {
                    for (int r : right) {
                        switch (input[i]) {
                            case '+':
                                res.push_back(l + r);
                                break;
                            case '-':
                                res.push_back(l - r);
                                break;
                            case '*':
                                res.push_back(l * r);
                                break;
                        }
                    }
                }
            }
            
        }
        if (res.size() == 0) {
            res.push_back(stoi(input));
        }
        return res;
    }
};
Runtime: 10 ms, faster than 24.44% of C++ online submissions for Different Ways to Add Parentheses.
Memory Usage: 11.6 MB, less than 13.78% of C++ online submissions for Different Ways to Add Parentheses.
