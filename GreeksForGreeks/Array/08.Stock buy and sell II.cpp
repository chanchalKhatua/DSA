//https://practice.geeksforgeeks.org/problems/stock-buy-and-sell2615/1
//in this type of problem, we buy and sell stock multiple times with maximum profit
// Here we return only total profit
class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        int p=0;
           for(int i=0; i<n-1; i++){
            if(prices[i] < prices[i+1]){
                p+=prices[i+1]-prices[i];
            }
        }
        return p;
        // code here
    }
};
// we only rerun Maximum Profit, then solution
int maxProfit(vector<int>&prices)
{
  int mProfit=0;
  int MinSoFar=prices[0];
  for(int i=0;i<prices.length();i++)
    {
      MinSoFar=min(MinSoFar,a[i]);
      int profit=a[i]-MinSoFar;
      mProfit=max(mProfit,profit);
    }
  return mProfit;
}
