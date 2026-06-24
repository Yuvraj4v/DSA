#include <iostream>
#include <vector>
#include <string>
using namespace std;
void gethelp(vector<vector<int>> &mat , int row , int col , vector<string> &ans , string path){
    int n = mat.size();
    if(row < 0 || col < 0 || row >= n || col >= n || mat[row][col] == -1){
        return;
    }
    if(mat[row][col] == 0){
        return;
    }
    if(row == n-1 && col == n-1){
        ans.push_back(path);
        return;
    }
    mat[row][col] = -1;
    gethelp(mat,row+1,col,ans,path+"D");
    gethelp(mat,row,col+1,ans,path+"R");
    gethelp(mat,row-1,col,ans,path+"U");
    gethelp(mat,row,col-1,ans,path+"L");
    mat[row][col] = 1;
}
vector<string> findPath(vector<vector<int>> &mat){
    vector<string> ans;
    string path = "";
    gethelp(mat,0,0,ans,path);
    return ans;
}
int main(){
    vector<vector<int>> mat = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string> result = findPath(mat);
    for(int i = 0 ; i < result.size() ; i++){
        cout<<result[i];
        cout<<endl;
    }
}