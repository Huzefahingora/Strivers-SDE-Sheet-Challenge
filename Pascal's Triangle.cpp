#include <bits/stdc++.h>

// //notes
// //First, we will run a loop(say row) from 1 to n.
// Inside the loop, we will call a generateRow() function and add the returned list to our final answer. Inside the function we will do the following:
// First, we will store the 1st element i.e. 1 manually.
// After that, we will use a loop(say col) that runs from 1 to n-1. It will store the rest of the elements.
// Inside the loop, we will use the specified formula to print the element. We will multiply the previous answer by (row-col) and then divide it by col itself.
// Thus, the entire row will be stored and returned.
// Finally, we will return the answer list.
 vector<long long int >getRows(int row){
        long long ans = 1;
        vector<long long int>ansRows;
        ansRows.push_back(1);
        for(int col=1;col<row;col++){
            ans = ans * (row-col);
            ans = ans/col;
            ansRows.push_back(ans);
        }
        return ansRows;
    }
    vector<vector<long long int>> printPascal(int numRows)  {
        
        vector<vector<long long int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(getRows(i));
        }
        return ans;
    }
