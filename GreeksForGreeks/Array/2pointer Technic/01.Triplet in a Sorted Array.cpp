
// Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.


// Example 1:

// Input:
// n = 6, X = 13
// arr[] = [1 4 45 6 10 8]
// Output:
// 1
// Explanation:
// The triplet {1, 4, 8} in 
// the array sums up to 13.
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        
        sort(A,A+n);
        for(int i=0;i<n-2;i++)
        {
            int sum=X;
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                if(A[i]+A[j]+A[k]==sum)
                return true;
                else if(A[i]+A[j]+A[k]>sum)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        return false;
    }

};
