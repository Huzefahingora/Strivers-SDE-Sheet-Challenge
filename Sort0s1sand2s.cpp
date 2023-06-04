#include <bits/stdc++.h> 
void sort012(int *nums, int n)
{
   //stl
   // sort(nums,nums+n);
   //three variable
   //  int cnt0=0,cnt1=0,cnt2=0;
   //      for(int i=0;i<n;i++){
   //          if(nums[i]==0)cnt0++;
   //          else if(nums[i]==1)cnt1++;
   //          else if(nums[i]==2)cnt2++;
   //      }
   //      for(int i=0;i<cnt0;i++)nums[i]=0;
   //      for(int i=cnt0;i<cnt0+cnt1;i++)nums[i]=1;
   //      for(int i=cnt1+cnt0;i<n;i++)nums[i]=2;
        //optimal dutch national flag algo
           
       int low = 0;
       int high = n-1;
       int mid = 0;
       while(mid<=high){
           if(nums[mid]==0){
               swap(nums[low],nums[mid]);
              mid++;
                   low++;
               }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[high],nums[mid]);
                high--;
            }
       }
        
    }

