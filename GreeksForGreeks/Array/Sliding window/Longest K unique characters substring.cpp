//https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int ans=-1;
    map<char ,int>map1;
    int i=0,j=0;
    while(j<s.length())
    {   map1[s[j++]]++;
         if(map1.size()==k)
          {
            ans=max(ans, j-i);
            
           } 
           else
           {
             while(map1.size()>k && i<=j)
              {
                 map1[s[i]]--;
                  if(map1[s[i]]==0)
                    map1.erase(s[i]);
                    i++;
        
               }
           }
           //j++;
    }
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends
