//leetcode problem number is 79
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
    bool solve(vector<vector<char>>& board, string& word, int i, int j, int idx) {
        if (idx == word.size()) return true;

        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size()
            || board[i][j] != word[idx]) {
            return false;
        }

        char temp = board[i][j];
        board[i][j] = '#';

        bool found =
            solve(board, word, i + 1, j, idx + 1) ||
            solve(board, word, i - 1, j, idx + 1) ||
            solve(board, word, i, j + 1, idx + 1) ||
            solve(board, word, i, j - 1, idx + 1);

        board[i][j] = temp;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (solve(board, word, i, j, 0)) {
                    return true;
                }
            }
        }

        return false;
    }
int main(){
    vector<vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word = "ABCCED";
    cout<<exist(board,word);
}