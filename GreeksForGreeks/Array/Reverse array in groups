https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Arrays/problem/reverse-array-in-groups0255

class Solution{
public:
//Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
      
     int start=0;
        int end = n-1;
        for(int i=0; i<n; i=i+k){
            start=i;
            end = min(n-1, k+i-1);
            while(start<=end){
                swap(arr[start++],arr[end--]);
    
            }
        }
    }
};
