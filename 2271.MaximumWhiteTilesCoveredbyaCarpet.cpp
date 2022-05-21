class Solution {
public:
    int maximumWhiteTiles(vector<vector<int>>& tiles, int carpetLen) {
        sort(tiles.begin(), tiles.end());
        vector<int> tts(tiles.size());
        int total = 0;
        for(int i = 0; i < tiles.size(); i++){
            tts[i] = total;
            total += tiles[i][1] - tiles[i][0] + 1;
        }
        
        int res = 0;
        for(int i = 0; i < tiles.size(); i++){
            int _last_tile = tiles[i][0] + carpetLen - 1;
            auto _ptr = upper_bound(tiles.begin()+i, tiles.end(), _last_tile, [](int a, auto& e){
                return a < e[0];
            });
            
            int last_idx = _ptr - tiles.begin() - 1;
            int t = tts[last_idx] - tts[i];
            t += min(_last_tile, tiles[last_idx][1]) - tiles[last_idx][0] + 1;
            res = max(res, t);
        }
        
        return res; 
    }
   
};
Runtime: 412 ms, faster than 81.76% of C++ online submissions for Maximum White Tiles Covered by a Carpet.
Memory Usage: 71.1 MB, less than 52.98% of C++ online submissions for Maximum White Tiles Covered by a Carpet.
