//https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Sorting/problem/inversion-of-array-1587115620
//Given an array of integers. Find the Inversion Count in the array. 

// Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If the array is already sorted then the inversion count is 0.
// If an array is sorted in the reverse order then the inversion count is the maximum. 
// Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 

// Example 1:

// Input: N = 5, arr[] = {2, 4, 1, 3, 5}
// Output: 3
// Explanation: The sequence 2, 4, 1, 3, 5 
// has three inversions (2, 1), (4, 1), (4, 3).
// Example 2:

// Input: N = 5
// arr[] = {2, 3, 4, 5, 6}
// Output: 0
// Explanation: As the sequence is already 
// sorted so there is no inversion count.
// Example 3:

// Input: N = 3, arr[] = {10, 10, 10}
// Output: 0
// Explanation: As all the elements of array 
// are same, so there is no inversion count.
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array
    
    void merge(long long arr[],long long l,long long m,long long r,long long int &res )
    {
       long long  n1=m-l+1, n2=r-m;
         long long a1[n1],a2[n2];
         
         for(long long i=0;i<n1;i++)
         a1[i]=arr[l+i];
         
         for(long long j=0; j<n2;j++)
         a2[j]=arr[m+1+j];
         
         long long i=0,j=0;
         long long k=l;
         
         while(i<n1 && j<n2)
         {
             if(a1[i]<=a2[j])
             {
                 arr[k++]=a1[i++];
                 
             }
             else
             { res=res+(n1-i);
                arr[k++]=a2[j++]; 
             }
         }
         while(i<n1)
         {
            arr[k++]=a1[i++]; 
         }
         while(j<n2)
         {
             arr[k++]=a2[j++];
         }
        
    }
    
    void mergesort(long long arr[],long long low,long long high,long long int &res)
    {  if(low<high){ 
        long mid=low+(high-low)/2;
        mergesort(arr,low,mid,res);
        mergesort(arr,mid+1,high,res);
        merge(arr,low,mid,high,res);
        }
        else
        return;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long int  res=0;
        long long  low=0;
        long long high=N-1;
        mergesort(arr,low,high,res);
        return res;
    }

};
