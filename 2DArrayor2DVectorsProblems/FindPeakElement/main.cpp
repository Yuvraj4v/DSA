//leetcode problem number 1901
#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
    int findMaxRow(vector<vector<int>>& mat, int col) {
        int maxRow = 0;
        int m = mat.size();
        for (int i = 0; i < m; i++) {
            if (mat[i][col] > mat[maxRow][col]) {
                maxRow = i;
            }
        }
        return maxRow;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int low = 0;
        int high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int maxRow = findMaxRow(mat, mid);
            int left = (mid - 1 >= 0) ? mat[maxRow][mid - 1] : -1;
            int right = (mid + 1 < n) ? mat[maxRow][mid + 1] : -1;
            if (mat[maxRow][mid] > left && mat[maxRow][mid] > right) {
                return {maxRow, mid};
            }
            else if (mat[maxRow][mid] < left) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return {-1, -1};
    }
int main(){
    vector<vector<int>> arr = {{10,20,15},{21,30,14},{7,16,32}};
    vector<int> result = findPeakGrid(arr);
    for(int x : result){
        cout<<x<<" ";
    }
}