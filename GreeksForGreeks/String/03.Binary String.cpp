// The task is to complete the function binarySubstring() which takes the length of binary string n
// and a binary string a as input parameter and counts the number of substrings starting and ending
// with 1 and returns the counts


class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
        // Your code here
        
        long count=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='1')
            {
                count++;
            }
        }
        return(count*(count-1))/2;
        
    }

};
