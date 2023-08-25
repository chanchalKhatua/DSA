
//https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Arrays/problem/maximum-occured-integer4602
//This Solution can be solved using Hashmap or map techniue with O(N*M) time complexity but we can solve it using array 
//index techniqe in O(n+Max)
class Solution{
    public:
    // L and R are input array
    // maxx : maximum in R[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in L[] and R[]
    //Function to find the maximum occurred integer in all ranges.
    int maxOccured(int L[], int R[], int n, int maxx){
    
        // Your code here
        vector<int>v(maxx+10);
        for(int i=0;i<n;i++)
        {
            v[L[i]]+=1;
            v[R[i]+1]-=1;
        }
        int ans=v[0];
        int index=0;
        for(int i=1;i<maxx+2;i++)
        {
            v[i]+=v[i-1];
            if(ans<v[i])
            {
                ans=v[i];
                index=i;
            }
        }
        return index;
}
};
