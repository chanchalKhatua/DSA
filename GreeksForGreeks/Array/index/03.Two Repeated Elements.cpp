//User function template for C++
//https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Searching/problem/two-repeated-elements-1587115621
// You are given an array of N+2 integer elements. All elements of the array are in the range 1 to N. Also, all elements occur once except two numbers which occur twice. Find the two repeating numbers.

// Note: Return the numbers in their order of appearing twice. So, if X and Y are the repeating numbers, and X repeats twice before Y repeating twice, then the order should be (X, Y).

// Example 1:

// Input:
// N = 4
// array[] = {1,2,1,3,4,3}
// Output: 1 3
// Explanation: In the given array, 
// 1 and 3 are repeated two times.
// Example 2:

// Input:
// N = 2
// array[] = {1,2,2,1}
// Output: 2 1
// Explanation: In the given array,
// 1 and 2 are repeated two times 
// and second occurence of 2 comes 
// before 1. So the output is 2 1.
class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int N) {
        // Your code here
        bool first=false;
        vector<int>res;
        for(int i=0;i<N+2;i++)
        {
            if(arr[abs(arr[i])]>0)
            {
                arr[abs(arr[i])]=-arr[abs(arr[i])];
            }
            else{
            if(first==false)
            {
                res.push_back(abs(arr[i]));
                first=true;
            }
            else 
            {
                res.push_back(abs(arr[i]));
                break;
            }
            }
        }
        return res;
    }
};
