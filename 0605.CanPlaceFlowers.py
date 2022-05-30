class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i = 0; i < flowerbed.size() and n > 0; i++){
            if((i == 0 or flowerbed[i-1] == 0) and flowerbed[i] != 1 and (i == flowerbed.size() - 1 or flowerbed[i+1] != 1)){
                n--;
                flowerbed[i] = 1;
            }
        }
        if(n <= 0)
            return true;
        else
            return false;
    }
};
Runtime: 24 ms, faster than 51.87% of C++ online submissions for Can Place Flowers.
Memory Usage: 20.3 MB, less than 21.87% of C++ online submissions for Can Place Flowers.
