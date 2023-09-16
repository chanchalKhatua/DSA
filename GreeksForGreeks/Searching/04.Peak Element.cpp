//https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Searching/problem/peak-element
// https://leetcode.com/problems/find-peak-element/
//below leet code solution does not pass in greeksforgreeks solution  in this test case 9 14 10 10 1 2 1 7 10 10 14 19 9
//i dont why gfg test does aceept this solution but leet did not accept  duplicated value .According to me both solution are equal 
//i dont know why
class Solution {
public:
    int findPeakElement(vector<int>& arr) {
         int low=0;
          int n=arr.size();
          if(n==1)
          return 0;
          if(n==2)
          { if(arr[0]>arr[1])
              return 0;
              else 
              return 1;
          }
         int high=n-1;
    while(low<=high)
    {   
        int mid=low+(high-low)/2;
        if(mid>0 && mid<n-1)
        { if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            return mid;
            else if(arr[mid-1]>arr[mid])
            high=mid-1;
            else
           low=mid+1;
        }
        else if(mid==0)
        {
            if(arr[0]>arr[1])
            return 0;
            else
            return 1;
        }
        else if(mid==n-1)
        {    cout<<mid;
            if(arr[n-1]>arr[n-2])
            { 
            return n-1;
            }
            else
            return n-2;
        }
    }
    return 0;
    }
};

///gfg solution
 int mid = (low + high) / 2;

			if((mid == 0 || arr[mid - 1] <= arr[mid]) &&
				(mid == n - 1 || arr[mid + 1] <= arr[mid]))
				return mid;
			if(mid > 0 && arr[mid - 1] >= arr[mid])
				high = mid -1;
			else
				low = mid + 1;
