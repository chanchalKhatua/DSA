// Input:a = geeksforgeeks, b = forgeeksgeeks
// Output: YES
// Explanation: Both the string have same characters with
//         same frequency. So, both are anagrams.
//metod 1
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    // bool isAnagram(string a, string b){
    //     if(a.length()!=b.length())
    //     return false;
    //     // Your code here
    //     sort(a.begin(),a.end());
    //     sort(b.begin(),b.end());
    //     for(int i=0;i<a.length();i++)
    //     {
    //         if(a[i]==b[i])
    //         continue;
    //         else 
    //         return false;
    //     }
    //     return true;
        
        map<char, int>map;
        for(int i=0;i<a.length();i++)
        {
            map[a[i]]++;
        }
         for(int i=0;i<b.length();i++)
        {
            map[b[i]]--;
            if(map[b[i]]==0)
            map.erase(b[i]);
        }
        return map.empty();
    }

};
