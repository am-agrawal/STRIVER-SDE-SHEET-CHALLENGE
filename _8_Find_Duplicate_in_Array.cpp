#include <bits/stdc++.h> 
int findDuplicate(vector<int> &nums, int n){
	// Write your code here.
    int i;
    vector<int> arr(n, 0);
    for(i = 0; i < n; i++) {
        arr[nums[i]]++;
        if(arr[nums[i]] > 1) {
            return nums[i];
        }
    }
    return -1;
}
