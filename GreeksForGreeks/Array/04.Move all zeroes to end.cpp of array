https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?page=1&sprint=99c706c225f09f9f8941e6458c6ee661&sortBy=latest

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	   /* first solution here order of element is not maintain 
	   int j=n-1;
	    int i=0;
	    while(i<j)
	    {
	        if(arr[i]!=0)
	        {
	        i++;
	        continue;
	        }
	        else
	        {
	            swap(arr[i],arr[j--]);
	        }
	    }*/
	    // second solution maintain proper order of element
	    int i=0,j=0;
	    while(i<n &&j<n)
	    {
	        if(arr[i]!=0)
	        {  i++;
	           j++;
	        }else
	        {
	            while(arr[j]==0)
	            {  if(j<n)
	                j++;
	                else
	                return;
                 }
	            if(j<n)
	            swap(arr[i++],arr[j++]);
             }
	    
     	}
      //third Solution maintain proper order of element
      // code here
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if (arr[i]!=0)
	        {
	            swap(arr[count++],arr[i]);
	        }
         }
	 
      
	}
};

