
class Solution
{
    public:
    void insert(int arr[], int j)
    {    int key=arr[j+1];
    while(j>=0 && arr[j]>key)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        for(int j=1;j<n;j++)
        {
            int key=arr[j];
            int i=j-1;
            insert(arr,i);
        }
    }
};
