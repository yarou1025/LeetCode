public void merge(int[] nums1, int m, int[] nums2, int n) {
    int index1 = m - 1, index2 = n - 1;
    int indexMerge = m + n - 1;
    while (index2 >= 0) {
        if (index1 < 0) {
            nums1[indexMerge--] = nums2[index2--];
        } else if (index2 < 0) {
            nums1[indexMerge--] = nums1[index1--];
        } else if (nums1[index1] > nums2[index2]) {
            nums1[indexMerge--] = nums1[index1--];
        } else {
            nums1[indexMerge--] = nums2[index2--];
        }
    }
    // int n1 = 0, n2 = 0;
        // while(n1 < m and n2 < n){
        //     if(nums1[n1] < nums2[n2]){
        //         tmp.push_back(nums1[n1++]);                
        //     }
        //     else{
        //         tmp.push_back(nums2[n2++]);
        //     }
        // }
        // for(; n1 < m; n1++){
        //     tmp.push_back(nums1[n1]);
        // }
        // for(; n2 < n; n2++){
        //     tmp.push_back(nums2[n2]);
        // }
        // nums1.assign(tmp.begin(), tmp.end());
}
