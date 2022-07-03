class Solution {
public:
    
    vector<pair<int, int>> DIRECTIONS = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}}; 
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0] == 1)
            return -1;
        
        int rows = grid.size();
        int cols = grid[0].size();
        
        if(grid[rows-1][cols-1] == 1) return -1;
        if(rows == 1 and cols == 1) return 1;
        
        queue<vector<int>> q;
        q.push({0, 0, 1});
        grid[0][0] = 1;

        while(!q.empty()){
            auto it = q.front();
            q.pop();
            
            int cur_row = it[0];
            int cur_col = it[1];
            int res = it[2];
                        
            for(auto i: DIRECTIONS){                
                int next_row = cur_row + i.first;
                int next_col = cur_col + i.second;
                
                if(next_row >= 0 and next_col >= 0 and next_row < rows and next_col < cols and grid[next_row][next_col] == 0){
                    q.push({next_row, next_col, res + 1});
                    grid[next_row][next_col] = 1;
                    if(next_row == rows-1 and next_col == cols-1) return res+1;
                }
            }
        }
        return -1;    
    }
};
Runtime: 230 ms, faster than 20.57% of C++ online submissions for Shortest Path in Binary Matrix.
Memory Usage: 36.8 MB, less than 20.43% of C++ online submissions for Shortest Path in Binary Matrix.
