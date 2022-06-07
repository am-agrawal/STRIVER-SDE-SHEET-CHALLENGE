#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int i, Min = prices[0], maxProfit = 0;
    for (i = 1; i < prices.size(); i++) {
        maxProfit = max(maxProfit, prices[i]-Min);
        Min = min(Min, prices[i]);
    }
    return maxProfit;
}