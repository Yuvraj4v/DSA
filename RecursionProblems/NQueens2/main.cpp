//leetcode problem number 52
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
    void nqueens(vector<string> &board , int n , int row , int &count){
        if(row==n){
            count++;
            return;
        }
        for(int j = 0 ; j < n ; j++){
            if(issafe(board,row,j,n)){
                board[row][j] = 'Q';
                nqueens(board,n,row+1,count);
                board[row][j] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        int count = 0;
        nqueens(board,n,0,count);
        return count;
    }
int main(){
    cout<<totalNQueens(4);
}