class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int res = 0;
        for(int i = 0; i < s.length() - k + 1; i++){
            
            int  div = stoi(s.substr(i, k));
            cout << div << endl;

            if(div == 0) continue;
            else if(num%div == 0){
                cout << "is" << div << endl;
                res += 1;
                // res.insert(div);
            }
        }
        return res;

    }
};
