// leetcode problem number is 63
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int gethelp(vector<vector<int>> &mat, int row, int col, vector<vector<int>> &dp)
{
    if (row >= mat.size() || col >= mat[0].size())
        return 0;
    if (mat[row][col] == 1)
        return 0;

    if (row == mat.size() - 1 && col == mat[0].size() - 1)
        return 1;

    if (dp[row][col] != -1)
        return dp[row][col];

    return dp[row][col] =
               gethelp(mat, row + 1, col, dp) +
               gethelp(mat, row, col + 1, dp);
}

int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
{
    int n = obstacleGrid.size();
    int m = obstacleGrid[0].size();

    vector<vector<int>> dp(n, vector<int>(m, -1));

    return gethelp(obstacleGrid, 0, 0, dp);
}
int main(){
    vector<vector<int>> mat = {{0,1,1,1},{0,0,1,0},{0,0,1,1},{1,0,0,0}};
    cout<<uniquePathsWithObstacles(mat);
}