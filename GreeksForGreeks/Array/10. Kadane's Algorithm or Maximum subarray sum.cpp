//https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Arrays/problem/kadanes-algorithm-1587115620
//Maximum subarray sum or kadene algorithm
// Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.


// Example 1:

// Input:
// N = 5
// Arr[] = {1,2,3,-2,5}
// Output:
// 9
// Explanation:
// Max subarray sum is 9
// of elements (1, 2, 3, -2, 5) which 
// is a contiguous subarray.
// Example 2:

// Input:
// N = 4
// Arr[] = {-1,-2,-3,-4}
// Output:
// -1
// Explanation:
// Max subarray sum is -1 
// of element (-1)
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long final_max=arr[0];
        long long maxi=arr[0];
        for(int i=1;i<n;i++)
        {
            maxi=max((long long)arr[i],maxi+(long long)arr[i]);
            final_max=max(final_max,maxi);
        }
        return final_max;
    }
};

// with different solotions
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        int tempmax =INT_MIN;
        int max =0;
        for(int i=0;i<n;i++)
        {max+=arr[i];
            if(tempmax<max)
            tempmax=max;
            if(max<0)
            max=0;
        }
        return tempmax;
    }
};
