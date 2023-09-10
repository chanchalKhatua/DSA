//https://leetcode.com/problems/find-smallest-letter-greater-than-target/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low=0;
        int high=letters.size()-1;
        int mid=0;
        char res=letters[0];
        while(low<=high)
        {
                 mid=low+(high-low)/2;
                 if(letters[mid]==target)
                    low=mid+1;
                 else if(letters[mid]<target)
                 low=mid+1;
                 else
                 {
                 high =mid-1;
                 res=letters[mid];
                 }

        }
        //if(mid==0)
        return res;
       // else
        //return letters[letters.size()-1];
    }
};
