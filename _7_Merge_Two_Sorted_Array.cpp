#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& nums1, vector<int>& nums2, int m, int n) {
	// Write your code here.
    vector<int> temp(m);
    for (int i = 0; i < m; i++) {
        temp[i] = nums1[i];
    }
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if(temp[i] < nums2[j]) {
            nums1[k] = temp[i];
            i++;
            k++;
        } else {
            nums1[k] = nums2[j];
            j++;
            k++;
        }
    }
    if(k != m+n) {
        while (i < m) {
            nums1[k] = temp[i];
            i++;
            k++;
        }
        while (j < n) {
            nums1[k] = nums2[j];
            j++;
            k++;
        }
    }
    return nums1;
}