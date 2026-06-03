//leetcode problem number 74
#include<iostream>
#include<vector>
using namespace std;
bool insearch(vector<vector<int>>& matrix, int target , int row){
        int n = matrix[0].size();
        int start = 0;
        int end = n-1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(matrix[row][mid] == target){
                return true;
            }
            else if(target>matrix[row][mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size() ;
        int n = matrix[0].size();
        int startingrow = 0;
        int endingrow = m-1;
        while(startingrow <= endingrow){
            int midrow = startingrow + (endingrow - startingrow)/2;
            if(target >= matrix[midrow][0] && target <= matrix[midrow][n-1]){
                return insearch(matrix,target,midrow);
            }
            else if(target>matrix[midrow][n-1]){
                startingrow = midrow + 1;
            }
            else{
                endingrow = midrow - 1;
            }
        }
        return false;
        
    }
int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 34;
    cout<<searchMatrix(matrix,target);
}    