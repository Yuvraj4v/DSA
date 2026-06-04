//leetcode problem number 54
#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int startingrow = 0;
        int endingrow = m-1;
        int startingcol = 0;
        int endingcol = n-1;
        vector<int> ans;
        while(startingrow<=endingrow && startingcol<=endingcol){
            //top
            for(int j = startingcol;j<=endingcol;j++){
                ans.push_back(matrix[startingrow][j]);
            }
            //right 
            for(int i = startingrow+1;i<=endingrow;i++){
                ans.push_back(matrix[i][endingcol]);
            }
            //bottom
            for(int j = endingcol-1;j>=startingcol;j--){
                if(startingrow==endingrow){
                    break;
                }
                ans.push_back(matrix[endingrow][j]);
            }
            //left
            for(int i = endingrow-1;i>=startingrow+1;i--){
                if(startingcol==endingcol){
                    break;
                }
                ans.push_back(matrix[i][startingcol]);
            }
            startingrow++; startingcol++;
            endingrow--; endingcol--;
        }
        return ans;
    }    
int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    vector<int> result = spiralOrder(matrix);
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}