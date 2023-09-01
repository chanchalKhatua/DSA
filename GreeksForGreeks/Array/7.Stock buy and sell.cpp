//https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1
//{ Driver Code Starts
//Initial template for C++
// In this type of buy and sell stock problem, we buy and sell stock multiple times with maximum profit
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Back-end complete function Template for C++

class Solution{
public:
     vector<int>buy;
     vector<int>sell;
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n)
    {
        vector<vector<int> > result;
      //Prices must be given for at least two days else return the empty result.
        if (n == 1)    
            return result;
     
        //Creating solution vector.
        
     
        //Traversing through given price array.
        int i = 0;
        while (i < n-1)
        {
            //Finding Local Minima. Note that the limit of loop is (n-2)
            //as we are comparing present element to the next element. 
            while ((i < n-1) && (A[i+1] <= A[i]))
                i++;
     
            //If we reach the end, we break the loop as no further
            //solution is possible.
            if (i == n-1)
                break;
     
            //Storing the index of minima which gives the day of buying stock.
            
            buy.push_back(i++);
     
            //Finding Local Maxima. Note that the limit of loop is (n-1)
            //as we are comparing present element to previous element.
            while ((i < n) && (A[i] >= A[i-1]))
                i++;
     
            //Storing the index of maxima which gives the day of selling stock.
            sell.push_back(i-1);
     
            //Incrementing count of buy/sell pairs.
        }
        
        if (buy.size() == 0)
            return result;
        else
        {
            //Storing the buy/sell pairs in a list.
            for (int i = 0; i <buy.size(); i++){
                result.push_back({buy[i],sell[i]});
            }

        }
        //returning the result.
        return result;
    }
};
