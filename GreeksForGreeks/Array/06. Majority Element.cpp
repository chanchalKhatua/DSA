//https://practice.geeksforgeeks.org/batch/cip-1/track/DSA-Foundation-Searching/problem/majority-element-1587115620
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {  int n =size;
        
        int count=0,res=0;
        for(int i=0;i<n;i++)
        {   if(count==0)
            res=a[i];
            if(res==a[i])
            count++;
            else
            count--;
        }
        count =0;
        for(int i=0; i<n;i++)
        {
            if(res==a[i])
            count++;
        }
        if(count>n/2)
        return res;
        else
        return -1;
        
    }
};
