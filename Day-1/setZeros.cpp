#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
//notes
//pahela row aand colom traverse and ek extra variable matrix[0][0] mate col1
//pacchi modify 1 row n-1 row 1 colom to m-1 colom using 0th row and colum and col1 variable
// If matrix[0][0] = 0, we will change all the elements from the cell (0,1) to (0, m-1), to 0.
// If col0 = 0, we will change all the elements from the cell (0,0) to (n-1, 0), to 0.
	 int n = matrix.size();
       int m = matrix[0].size();
       int col1=1;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(matrix[i][j]==0){
                matrix[i][0] = 0;
                if(j != 0)
                matrix[0][j] = 0; 
                else
                col1=0;

               }
           }
       }
       for(int i=1;i<n;i++){
           for(int j=1;j<m;j++){
               if(matrix[i][j] != 0){
                   if(matrix[i][0] == 0 || matrix[0][j] == 0){
                       matrix[i][j] = 0;
                   }
               }
           }
       }
       if(matrix[0][0] == 0){
           for(int j = 0; j<m;j++){
               matrix[0][j]=0;
           }
       }
       if(col1==0){
           for(int i=0;i<n;i++){
               matrix[i][0]=0;
           }
       }
       
}