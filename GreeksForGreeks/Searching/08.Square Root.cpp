// Function to find square root
// x: element to find square root
//https://practice.geeksforgeeks.org/problems/square-root/1
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
    if(x==0||x==1)
    return x;
    if(x==2||x==3)
    return 1;
        long long int high=x/2;
         long long int low=2,ans; 
        while(low<=high)
        {
           long long int  mid= (low+high)/2;
           if (mid*mid==x)
           return mid;
            else if (mid*mid<=x)
            {
                low=mid+1;
                ans=mid;
            }
            else
            {
                high=mid-1;
            }
            
            
        }
        return ans;
    }
};
