//{ Driver Code Starts
// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


// Example 1:

// Input: 
// N = 5
// arr[]= {0 2 1 2 0}
// Output:
// 0 0 1 2 2
// Explanation:
// 0s 1s and 2s are segregated 
// into ascending order.
///https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/0

//same Problem
//Sort an array of 0s, 1s, 2s.
// Three-way partitioning when multiple occurrences of a pivot may exist.
// Partitioning around a range.
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int low=0,mid=0,high=n-1;
        while(mid<=high)
        {
            if(a[mid]==0)
            {  swap(a[mid],a[low]);
                low++;
                mid++;
            }else if(a[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(a[mid],a[high]);
                high--;
            }
            
        }
    }
    
};
