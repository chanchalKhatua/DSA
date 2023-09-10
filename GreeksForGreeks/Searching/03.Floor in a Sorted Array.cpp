//https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Searching/problem/floor-in-a-sorted-array-1587115620

class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    long long res=-1;
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        long long low=0;
        long long high=n-1;
        long long mid=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(v[mid]==x)
            return mid;
            else if(v[mid]>x)
            {
                high=mid-1;
            }
            else
            {
                res=mid;
                low=mid+1;
            }
        }
        
        return res;
    }
};
