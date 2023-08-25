class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        
        if(low<high)
        {
           int p=partition(arr,low,high);
          // quickSort(arr,low,p-1);
           quickSort(arr,low,p); //for hoore pattion as fast element pivot
           quickSort(arr,p+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
      /* // Your code here
       int pivot=arr[high];
       int i=low-1;
       for(int k=low;k<high;k++)
       { 
           if(arr[k]<=pivot)
           {    i++;
               swap(arr[i],arr[k]);
           }
       }
       swap(arr[i+1],arr[high]);
       return(i+1);
       */
        int pivot=arr[low];
       int i=low-1;
       int j=high+1;
       while(true)
       {
           do{
               i++;
               
           }while(arr[i]<pivot);
           
           do{
               j--;
           }while(arr[j]>pivot);
           if(i>=j)
           return j;
           swap(arr[i],arr[j]);
       }
    }
};
