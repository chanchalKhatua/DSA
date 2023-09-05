//https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Arrays/problem/longest-subarray-of-evens-and-odds
//User function Template for C++

class Solution{
    public:
    //Complete this function
    //Function to find the length of longest subarray of even and odd numbers.
    int maxEvenOdd(int arr[], int n) 
    { 
       //Your code here
       int ma=1;
       int count =1;
       for(int i=0;i<n-1;i++)
       {
           if((arr[i]%2==0 && arr[i+1]%2==1)  || (arr[i]%2==1 && arr[i+1]%2==0))
           {
               count++;
               ma=max(ma,count);
           }
           else
           count=1;
          
       }
       return ma;
    } 
};
