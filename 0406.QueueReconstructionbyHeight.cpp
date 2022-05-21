class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), [](auto &a, auto &b){
            if(a[0] > b[0]) return true;
            if(a[0] == b[0] and a[1] < b[1]) return true;
            return false;
        });
        
        for(int i = 0; i < people.size(); i++){
            if(people[i][1] < i){
                vector<int> v_key  = people[i];
                int j = i;
                for(j; j > v_key[1]; j--)
                {
                    people[j] = people[j-1];
                }
                people[j] = v_key;
            }
        }
        return people;
    }
};
Runtime: 130 ms, faster than 68.93% of C++ online submissions for Queue Reconstruction by Height.
Memory Usage: 12.3 MB, less than 45.47% of C++ online submissions for Queue Reconstruction by Height.
