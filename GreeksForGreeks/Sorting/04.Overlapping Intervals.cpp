
// https://practice.geeksforgeeks.org/problems/overlapping-intervals--170633/0
// https://www.geeksforgeeks.org/batch/cip-1/track/P100-Sorting/video/OTk3
// Intervals = {{1,3},{2,4},{6,8},{9,10}}
// Output: {{1, 4}, {6, 8}, {9, 10}}
// Explanation: Given intervals: [1,3],[2,4]
// [6,8],[9,10], we have only two overlapping
// intervals here,[1,3] and [2,4]. Therefore
// we will merge these two and return [1,4],
// [6,8], [9,10].

class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
        vector<vector<int>> ans;
         sort(intervals.begin(),intervals.end());
         int n=intervals.size();
         for(int i=0;i<n;i++)
         {
             if(ans.empty() || ans.back()[1]<intervals[i][0])
             {
                 ans.push_back(intervals[i]);
             }
             else
             {
                 ans.back()[1]=max(ans.back()[1],intervals[i][1]);
             }
         }
         
         return ans;
    }
    
};

class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
       vector<vector<int>> answer;
        sort(intervals.begin(), intervals.end());
        for(int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] > intervals[i-1][1]) 
            answer.push_back(intervals[i - 1]);
            else {
                intervals[i][0] = intervals[i - 1][0];
                intervals[i][1] = max(intervals[i][1], intervals[i - 1][1]);
            }
        }
        answer.push_back(intervals[intervals.size() - 1]);
        return answer;
    }
};
