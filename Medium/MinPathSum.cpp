class Solution {
public:
    int minpath(vector<vector<int>>& grid , int i , int j, vector<vector<int>> &dp) {
        if(i == 0 and j ==0) {
            return grid[i][j];
        }
        if(dp[i][j] != -1) return dp[i][j];
        int way1 , way2;
        way1 = way2 = INT_MAX;
        if(i > 0) {
            way1 = minpath(grid , i-1 , j , dp);
        }
        if(j > 0) {
            way2 = minpath(grid,i , j-1, dp);
        }
        return dp[i][j] = grid[i][j] + min(way1 , way2);
    }
    int minPathSum(vector<vector<int>>& grid) {

        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> dp(row , vector<int>(col , -1));
        return minpath(grid , row-1 , col-1  ,dp);
    }
};
