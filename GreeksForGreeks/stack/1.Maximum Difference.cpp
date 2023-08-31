https://practice.geeksforgeeks.org/problems/maximum-difference-1587115620/1
Maximum Difference between leftmost minimum and rightmost minimum of array
class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int arr[], int n)
    {
      //Your code here
     int m=INT_MIN;
        vector<int> lsmall;
        vector<int> rsmall;
        int small=arr[0];
        stack<int> s, s1;
        int i=0;

        while (i < n) {
           /* if (s.size() == 0) {
                lsmall.push_back(0);
            }
            else if (s.size() > 0 && s.top() < arr[i]) {
                lsmall.push_back(s.top());
            }
            else if (s.size() > 0 && s.top() >= arr[i]) {
                while (s.size() > 0 && s.top() >= arr[i])
                    s.pop();
                if (s.size() == 0)
                    lsmall.push_back(0);
                else
                    lsmall.push_back(s.top());
            }
            s.push(arr[i++]);*/
          // same code with shoter way 
          //Finding nearest smaller elements to the left
           while (!s.empty() && s.top() >= arr[i]) {
                s.pop();
            }
            if (s.empty()) {
                lsmall.push_back(0);
            } else {
                lsmall.push_back(s.top());
            }
            s.push(arr[i]);
        }

        i = n - 1;
        while (i >= 0) {
            if (s1.size() == 0) {
                rsmall.push_back(0);
            }
            else if (s1.size() > 0 && s1.top() < arr[i]) {
                rsmall.push_back(s1.top());
            }
            else if (s1.size() > 0 && s1.top() >= arr[i]) {
                while (s1.size() > 0 && s1.top() >= arr[i])
                    s1.pop();
                if (s1.size() == 0)
                    rsmall.push_back(0);
                else
                    rsmall.push_back(s1.top());
            }
            s1.push(arr[i--]);
        }

        reverse(rsmall.begin(), rsmall.end());
        for (int i = 0; i < n; i++) {
            m = max(m, abs(rsmall[i] - lsmall[i]));
        }
        return m;
    }
};
