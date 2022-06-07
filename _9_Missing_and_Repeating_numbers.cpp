#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int missing = 0, repeating = 0;
    vector<int> freq(n+1, 0);
    
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
    for(int i = 1; i <= n; i++) {
        if(freq[i] == 0) {
            missing = i;
        }
        if(freq[i] > 1) {
            repeating = i;
        }
    }
    
    return {missing, repeating};
}