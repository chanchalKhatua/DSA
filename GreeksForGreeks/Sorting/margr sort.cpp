
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int n1=m-l+1, n2=r-m;
         int a1[n1],a2[n2];
         
         for(int i=0;i<n1;i++)
         a1[i]=arr[l+i];
         
         for(int j=0; j<n2;j++)
         a2[j]=arr[m+1+j];
         
         int i=0,j=0;
         int k=l;
         
         while(i<n1 && j<n2)
         {
             if(a1[i]<a2[j])
             {
                 arr[k++]=a1[i++];
                 
             }
             else
             {
                arr[k++]=a2[j++]; 
             }
         }
         while(i<n1)
         {
            arr[k++]=a1[i++]; 
         }
         while(j<n2)
         {
             arr[k++]=a2[j++];
         }
    
          
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l<r)
        {
            int m= (r+l)/2;
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            merge(arr,l,m,r);
        }
        
    }
};
