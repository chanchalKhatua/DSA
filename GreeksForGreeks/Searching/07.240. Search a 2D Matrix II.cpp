//https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int row=matrix.size();
        int col=matrix[0].size();
        int i=0;
        int j=col-1;
        
        while(i>=0 && j>=0 && row>i && col>j)
        {  
            if(matrix[i][j]==target)
              return true;
            else if(matrix[i][j]>target)
            {
                j--;
            }
            else if(matrix[i][j]<target)
            {
                i++;
            }
        }
        return false;
    }
