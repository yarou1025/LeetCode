class Solution {
public:
    int numSquares(int n) {
//         vector<int> dp(n+1, numeric_limits<int>::max());
        
//         dp[0] = 0;
//         dp[1] = 1;
//         for(int i = 2; i <= n; i++){
//             for(int j = 1; j*j <= i; j++){
//                 dp[i] = min(dp[i], dp[i-j*j]+1);
//             }
//             // cout << dp[i] << endl;
//         }
//         return dp[n];
        if(ceil(sqrt(n)) == floor(sqrt(n))) return 1;
        vector<int> squares;
        for(int i = 1; i <= sqrt(n) + 1; i++){
            squares.push_back(i*i);
        }
        
        vector<bool> visited(n+1, false); 
        queue<int> q;
        q.push(n);
        visited[n] = true;
        int res = 0;
        
        while(!q.empty()){
            int cur_length = q.size();
            res += 1;
            
            while(cur_length-- != 0){
                int remain = q.front();
                q.pop();
                
                for(int s: squares){
                    int next = remain - s;
                    if(next < 0) break;
                    else if(next == 0) return  res;
                    else if(visited[next]) continue;
                    
                    visited[next] = true;
                    q.push(next);
                }
                
                
            }
        }
        return n;
    }
};
Runtime: 29 ms, faster than 93.73% of C++ online submissions for Perfect Squares.
Memory Usage: 8.6 MB, less than 78.66% of C++ online submissions for Perfect Squares.
