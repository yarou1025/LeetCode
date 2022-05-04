class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        m--;
        n--;
        int pos = nums1.size() - 1;
        while(m >= 0 and n >= 0){
            if(nums1[m] > nums2[n]){
                nums1[pos--] = nums1[m--];
            }
            else{
                nums1[pos--] = nums2[n--];
            }
        }
        while(n >= 0){
            nums1[pos--] = nums2[n--];
        }
    }
};


Runtime: 6 ms, faster than 26.07% of C++ online submissions for Merge Sorted Array.
Memory Usage: 9.2 MB, less than 31.60% of C++ online submissions for Merge Sorted Array.
