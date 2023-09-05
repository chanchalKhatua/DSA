
/*
//https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Arrays/video/MTU4Ng%3D%3D
Description

In a realm where numbers hold secrets, a captivating challenge awaits, which is, Minimum Consecutive Flips!!!

Our Task: Given a binary array, we need to convert this array into an array that either contains all 1s or all 0s.  We need to do it using the minimum number of group flips. 


 
Examples : 

Input : arr[] = {1, 1, 0, 0, 0, 1}
Output :  From 2 to 4
Explanation : We have two choices, we make all 0s or do all 1s.  We need to do two group flips to make all elements 0 and one group flip to make all elements 1.  Since making all elements 1 takes the least group flips, we do this.
 

Input : arr[] = {1, 0, 0, 0, 1, 0, 0, 1, 0, 1}
Output :  
From 1 to 3
From 5 to 6
From 8 to 8
 */
void printGroups(int arr[], int n)
{
	for(int i = 1; i < n; i++)
	{
		if(arr[i] != arr[i - 1])
		{
			if(arr[i] != arr[0])
                cout << "From " << i << " to ";
			else
                cout << i - 1 << endl;
		}
	}

	if(arr[n - 1] != arr[0])
        cout << n - 1 << endl;
}
