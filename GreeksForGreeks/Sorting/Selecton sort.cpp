
class Solution
{
    public:
    int select(int arr[], int i, int n)
    {
        // code here such that selectionSort() sorts arr[]
        int small=i;
        for(int k=i+1;k<n;k++)
        if(arr[small]>=arr[k])
        small=k;
        return small;
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int k=0;k<n-1;k++)
       {
           int small=select(arr,k,n);
           swap(arr[k],arr[small]);
       }
    }
};
