class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> nodes(n, 0);
        for(int i = 0; i < roads.size(); i++){
            nodes[roads[i][0]]++;
            nodes[roads[i][1]]++;
        }
        sort(nodes.begin(), nodes.end());
        long long res = 0;
        for(int i = 0; i < n; i++){
            res += (i+1)*nodes[i];
            // cout << i << ", " << nodes[i] << endl;
        }
        return res;
    }
};
