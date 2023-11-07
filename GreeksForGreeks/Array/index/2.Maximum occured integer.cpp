
//https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Arrays/problem/maximum-occured-integer4602
//This Solution can be solved using Hashmap or map techniue with O(N*M) time complexity but we can solve it using array 
//index techniqe in O(n+Max)
// For example consider the following ranges.
// L[] = {2, 1, 3}, R[] = {5, 3, 9)
// Ranges represented by above arrays are.
// [2, 5] = {2, 3, 4, 5}
// [1, 3] = {1, 2, 3}
// [3, 9] = {3, 4, 5, 6, 7, 8, 9}
// The maximum occurred integer in these ranges is 3.
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
