
//https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Strings/problem/count-words-in-string
class Solution{
  public:
    int countWords(string str){
        
        //Your code here
        int i=0;
        int n=str.length()-1;
        int count=1;
        while(i<n)
        {
            if(str[i]==' ')
            {
                count++;
            }
            i++;
        }
        return count;
    }
};
