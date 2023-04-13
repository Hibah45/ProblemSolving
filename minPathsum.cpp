#include<bits/stdc++.h>

class Solution {
public:
    int minPath(std::vector<std::vector<int>>& grid, int i, int j, std::vector<std::vector<int>> &dp){
        if(i == 0 && j == 0)
            return grid[0][0];
        
        if(i<0 || j<0)
            return 1e9;

        if(dp[i][j] != -1)
            return dp[i][j];

        int up = grid[i][j] + minPath(grid, i-1, j, dp);
        int left = grid[i][j] + minPath(grid,i,j-1, dp);

        return dp[i][j] = std::min(up, left);
    }
    int minPathSum(std::vector<std::vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        std::vector<std::vector<int> > dp(m,std::vector<int>(n,-1));

        return minPath(grid, m-1 , n-1, dp);
    }
};
//Tabulation reducing O(N-1)(M-1) stack spave
// int minPathSum(vector<vector<int>>& grid) {
//         int m = grid.size();
//         int n = grid[0].size();
//         vector<vector<int> > dp(m,vector<int>(n,0));

//         for(int i = 0;i< m; i++){
//             for(int j = 0;j<n;j++){
//                 if(i == 0 && j == 0)
//                     dp[i][j]= grid[i][j];
//                 else{
//                     int up = grid[i][j];
//                     if(i>0) 
//                     up += dp[i-1][j];
//                     else
//                     up += 1e9;
                    
//                     int left = grid[i][j];
//                     if(j>0) left += dp[i][j-1];
//                     else left += 1e9;

//                     dp[i][j] = min(up, left);
//                 }
//             }
//         }
        
int main(){
    Solution s1;
    // std::vector<std::vector<int>> matrix = {{2, 3, 4}, {4, 5, 9}, {1, 6,4}}; //ans-17
    std::vector<std::vector<int>> matrix{{5,9,6},
                            {11,5,2}};//ans-21
    std::cout<<s1.minPathSum(matrix);
    return 0;
}