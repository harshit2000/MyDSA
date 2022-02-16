//1901. Find a Peak Element II - https://leetcode.com/problems/find-a-peak-element-ii/
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector<int> ans; // we are required to create new 1D array to store the indices of maximum element in each column
        int row = mat.size(), col = mat[0].size();

        int i = 0, j = col-1; //iterating the rows and columns
        while (i>=0 and i<row and j>=0 and j<col){
            int top = (i-1<0)? -1:mat[i-1][j];
            int bottom  = (j-1<0)? -1:mat[i][j-1];
            int left = (j+1==col)? -1:mat[i][j+1];
            int right  = (i+1==row)? -1:mat[i+1][j];

            if (mat[i][j]>top and mat[i][j]>bottom and mat[i][j]>left and mat[i][j]>right){
                return {i,j};          
                  }

            int p = max(top, max(bottom, max(left,right)));

            if (p==top)
                i--;
            else if (p==bottom)
                j--;
            else if (p==right)
                i++;
            else
                j++;

        }

        return {-1,-1};


        
    }

    
};