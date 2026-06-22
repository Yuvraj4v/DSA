//leetcode problem number 51
#include<iostream>
#include<unordered_map>
#include<climits>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
    bool issafe(vector<string> &board , int row , int col , int n){
        for(int j = 0 ; j < n ; j++){
            if(board[row][j]=='Q'){
                return false;
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        for(int i = row , j = col ; i>=0 && j>=0 ; i-- , j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        for(int i = row , j = col ; i>=0 && j<n ; i-- , j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }
    void nqueens(vector<string> &board , int n , int row , vector<vector<string>> &ans){
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int j = 0 ; j < n ; j++){
            if(issafe(board,row,j,n)){
                board[row][j] = 'Q';
                nqueens(board,n,row+1,ans);
                board[row][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        nqueens(board,n,0,ans);
        return ans;
    }
int main(){
    int n = 4;
    vector<vector<string>> result = solveNQueens(n);
    for(int i = 0 ; i < result.size() ; i++){
        for(int j = 0 ; j < result[i].size() ; j++){
            cout<<result[i][j]<<endl;
        }
        cout<<endl;
    }
}