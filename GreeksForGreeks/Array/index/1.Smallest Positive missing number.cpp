//https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1?page=2&status[]=solved&sortBy=latest

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        
        int i=0;
while(i<n) 
        {  /* if(arr[i]>=1 && arr[i]<=n && arr[i])
        swap(arr[i],arr[arr[i]-1]);
           i++;*/
        
         while (arr[i] >= 1 && arr[i] <= n
               && arr[i] != arr[arr[i] - 1]) {
            swap(arr[i], arr[arr[i] - 1]);
            
        }
        i++;
        }
        for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
        }
        return n+1;    
    } 
};
