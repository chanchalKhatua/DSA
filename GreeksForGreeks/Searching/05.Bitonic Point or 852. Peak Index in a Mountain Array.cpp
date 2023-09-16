//https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1
//https://leetcode.com/problems/peak-index-in-a-mountain-array/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        //int n=arr.size()-1;
        //O(n)//Call also Bitonic Array
        // for(int i=1;i<n;i++)
        // {
        //    if(arr[i-1]<arr[i] && arr[i+1]<arr[i])
        //    return i;
        // }
        // if (arr[n]>arr[0])
        // return n;
        // else
        // return 0;
          int low=0;
          int n=arr.size();
          int high=n-1;
          if(n==1)
          return 0;
          if(n==2)
          { if(arr[0]>arr[1])
              return 0;
              else 
              return 1;
          }
          while(low<=high)
          { int mid=low+(high-low)/2;
              if((mid==0 || arr[mid]>arr[mid-1])&& (mid==n-1||arr[mid]>arr[mid+1]))
              return mid;
              if(arr[mid]<arr[mid+1])
              {
                  low=mid+1;
              }
              else
              {
                  high=mid-1;
              }
          }
          return high;

    }
};
