
//User function Template for C++

class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here  
        for(int i=1;i<n;i++)
        {   bool swapp=false;
            for(int j=1;j<n;j++)
            if(arr[j-1]>arr[j])
            {
            swap(arr[j-1],arr[j]);
            swapp=true;
            }
            if(swapp==false)
            break;
        }
    }
};
