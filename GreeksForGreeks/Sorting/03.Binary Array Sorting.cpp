//https://www.codingninjas.com/studio/problems/binary-array-sorting_985289?leftPanelTab=0
vector<int> sortBinaryArray(vector<int> arr, int n)  {
 	// Write your code here
	 int i=0;
	 int j=n-1;
	 while(true)
	 {
		 while(arr[i]==0)
		 {
			 i++;
		 }
		  while(arr[j]==1)
		 {
			 j--;
		 }
		 if(i>=j)
		 return arr;
		 swap(arr[i],arr[j]);
	 }
}
