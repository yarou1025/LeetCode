class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> charIdx(26, 0);
        for(int i = 0; i < s.length(); i++){
            charIdx[s[i]-'a'] = i;
        }
        
        vector<int> results;
        
        int maxIdx = -1, lastIdx = 0;
        for(int i = 0; i < s.length(); i++){
            maxIdx = max(maxIdx, charIdx[s[i]-'a']);
            if(i == maxIdx) {
                results.push_back(maxIdx - lastIdx + 1);
                lastIdx = i+1;
            }
        }
        return results;
        // map< char, vector<int> > letters;
        // for(int i = 0; i < s.length(); i++){
        //     if(letters.find(s[i] - 'a') == letters.end()){
        //         letters[s[i] - 'a'].push_back(i);
        //         letters[s[i] - 'a'].push_back(i);
        //     }
        //     letters[s[i]-'a'][1] = i;
        // }
        // vector<vector<int> > my_vec;
        // for(auto pr: letters){
        //     vector<int> tmp;
        //     tmp.push_back(pr.second[0]);
        //     tmp.push_back(pr.second[1]);
        //     my_vec.push_back(tmp);
        // }
        // sort(my_vec.begin(), my_vec.end(), [](const vector<int> &a, const vector<int> &b){
        //     if(a[0] == b[0]) return a[1] < b[1];
        //     else return a[0] < b[0];
        // });
        // if(my_vec.size() <= 1) return vector<int>(1, s.length());
        // int end = my_vec[0][1];
        // vector<int> res;
        // int tot = 0;
        // for(int i = 1; i < my_vec.size(); i++){
        //     // cout << my_vec[i][0] << ", " << my_vec[i][1] << " : " << end << endl;
        //     if(my_vec[i][0] > end){
        //         if(res.size() == 0)
        //             res.push_back(my_vec[i][0]);
        //         else
        //             res.push_back(my_vec[i][0]-tot);
        //         tot = my_vec[i][0];
        //     }
        //     end = max(my_vec[i][1], end);
        // }
        // if(res.size() == 0)
        //     return vector<int>(1, s.length());
        // else
        //     res.push_back(end - tot + 1);
        // return res;  
    }
};
Runtime: 3 ms, faster than 85.54% of C++ online submissions for Partition Labels.
Memory Usage: 6.7 MB, less than 67.97% of C++ online submissions for Partition Labels.
