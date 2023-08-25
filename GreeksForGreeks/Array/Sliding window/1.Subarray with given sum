https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&sprint=99c706c225f09f9f8941e6458c6ee661&sortBy=latest
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int>c;
        int j=0,i=0;
     long long sum=0;
        while(j<n)
        {
            if(sum<s)
            sum=sum+arr[j++];
           
            if(sum>s)
            while(sum>s)
            {
        
                sum=sum-arr[i++];
        
                
            }
             if (s==sum)
            {c.push_back(i+1);
            c.push_back(j);
            return c;
                
            }
        }
        if(c.empty())
        {
            c.push_back(-1);
            return c;
        }
        
    }
};
