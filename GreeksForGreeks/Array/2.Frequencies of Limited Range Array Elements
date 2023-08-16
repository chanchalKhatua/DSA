you can solution it using hashmap with o(n) space complexity.
https://www.youtube.com/watch?v=B2hI-QPoisk
https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Arrays/problem/frequency-of-array-elements-1587115620
you can also solve in in sorted array O(1) in this solution but here you can only print solution cant return with same array. 
Approach 1:
#include <iostream>
#include <cmath>
using namespace std;


void printFreq(int arr[], int n)
{
	int freq = 1, i = 1;

	while(i < n)
	{
		while(i < n && arr[i] == arr[i - 1])
		{
			freq++;
			i++;
		}

		cout<<arr[i - 1] << " " << freq << endl;

		i++;
		freq = 1;
	}
	if(n==1 || arr[n-1]!=arr[n-2])
	    cout<<arr[n-1] + " " + 1;
}


int main() {
	
      int arr[] = {10, 10, 20, 30, 30, 30}, n = 6;

      printFreq(arr, n);
    
}
Approach 2: this solution work with unsorted Array.
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        int i=0;
        while(i<N)
        {
            if(arr[i]<=0 || arr[i]>N || arr[i]>P)
            {
                i++;
                continue;
            }
            
         int e=arr[i]-1;
         if(arr[e]>0)
         {
             arr[i]=arr[e];
             arr[e]=-1;
         }
         else
         {
             arr[e]--;
             arr[i]=0;
             i++;
         }
         
        }
        for(int i=0;i<N;i++)
        {
            if(arr[i]<0)
            {
                arr[i]=-arr[i];
            }
            else
            {   arr[i]=0;
            }
        }
        
        
    }
};
