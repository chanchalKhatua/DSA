
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int kadenAlgo(int arr[], int num)
    {
        int final=arr[0];
        int maxi=arr[0];
        for(int i=1;i<num;i++)
        {
            maxi=max(arr[i],maxi+arr[i]);
            final=max(final,maxi);
        }
        return final;
    }
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        int sum=0;
        int max_normal=kadenAlgo(arr, num);
        // when array contain all negetive numbers then it return maximum 
        // of those negetive numbers;
        if(max_normal<0)
        return max_normal;
        for(int i=0;i<num;i++)
        {
            sum+=arr[i];
            arr[i]=-arr[i];// we covert all element into opposite element we want minimum
            //sumarray sum with same kadene algo.
        }
         sum=sum+kadenAlgo(arr,num);//here we remove minumum subarray. sum-minimumsubarary
        sum=max(sum,max_normal);
        return sum;
    }
};
