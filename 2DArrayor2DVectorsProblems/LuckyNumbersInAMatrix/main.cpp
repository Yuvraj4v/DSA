//leetcode problem number is 1380
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> rowMin(row,INT_MAX);
        vector<int> colMax(col,INT_MIN);
        vector<int> ans;

        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                rowMin[i] = min(rowMin[i],matrix[i][j]);
                colMax[j] = max(colMax[j],matrix[i][j]);
            }
        }

        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j]){
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
int main(){
    vector<vector<int>> arr ={{3,7,8},{9,11,13},{15,16,17}};
    vector<int> result = luckyNumbers(arr);
    for(int x : result){
        cout<<x<<" ";
    }
}