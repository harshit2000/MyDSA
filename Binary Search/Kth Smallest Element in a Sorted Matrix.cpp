class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int m = matrix[0].size();
        int l = matrix[0][0];
        int r = matrix[n-1][m-1];
        int ans = 0;

        while(l<=r){
            int mid = (r+l)/2;
            int count  = helper(matrix, mid);
            if(count<k){
                l = mid+1;
            }
            else{
                ans = mid;
                r = mid-1;
            }
        }
        return ans;
    }

private:
    int helper(vector<vector<int>>& matrix, int val){
        int i = matrix.size()-1;
        int j = 0;
        int count =  0;
        while (i>=0 and j<matrix[0].size()){
            if (matrix[i][j]>val){
                i--;s
            }
            else{
                count += i+1;
                j++;
            }
        }
        return count;
    }

};