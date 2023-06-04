#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
//     notes:
//     Intuition: We will linearly travel the array. We can maintain a minimum from the start of the array and compare it with every element of the array, if it is greater than the minimum then take the difference and maintain it in max, otherwise update the minimum.

// Approach:

// Create a variable maxPro and store 0 initially.
// Create a variable minPrice and store some larger value(ex: MAX_VALUE) value initially.
// Run a for loop from 0 to n.
// Update the minPrice if it is greater than the current element of the array
// Take the difference of the minPrice with the current element of the array and compare and maintain it in maxPro.
// Return the maxPro.

    int minimum=prices[0];
    int profit=0;
    int n=prices.size();
    for(int i=0;i<n;i++){
        int cost=prices[i]-minimum;
        profit=max(cost,profit);
        minimum=min(prices[i],minimum);
    }
    return profit;
}