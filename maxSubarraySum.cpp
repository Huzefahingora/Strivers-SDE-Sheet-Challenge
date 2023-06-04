#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
// notes:
// We will run a loop(say i) to iterate the given array.
// Now, while iterating we will add the elements to the sum variable and consider the maximum one.
// If at any point the sum becomes negative we will set the sum to 0 as we are not going to consider it as a part of our answer.
// Kadane’s Algorithm : Maximum Subarray Sum in an Array
   
    long long maxSum=LONG_MIN;
    long long sumCurrent=0;
    for(int i=0;i<n;i++){
        sumCurrent+=arr[i];
        if(sumCurrent>maxSum){
            maxSum=sumCurrent;
        }
        if(sumCurrent<0){
            sumCurrent=0;
        }
    }
    if(maxSum<0)maxSum=0;
            return maxSum;

}