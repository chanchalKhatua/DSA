// Input:
// S = geeksforgeeks
// Output: g
// Explanation: We see that both e and g
// repeat as we move from left to right.
// But the leftmost is g so we print g.

//User function Template for C++

class Solution
{
    public:
    //Function to find repeated character whose first appearance is leftmost.
    int repeatedCharacter (string s) 
    { 
        //Your code here
        
        int cha=256,res=-1;
        bool visitedChar[cha];
        fill(visitedChar,visitedChar+cha,false);
        for(int i=s.length()-1;i>=0;i--)
        {
            if(visitedChar[s[i]])
            {
                res=i;
            }
            else
            {
                visitedChar[s[i]]=true;
            }
        }
        return res;
    } 
};
