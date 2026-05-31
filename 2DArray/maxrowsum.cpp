#include<iostream>
#include<climits>
using namespace std;
int getmax(int matrix[][3],int rows,int col){
    int maxrowsum = INT_MIN;
    for(int i=0;i<rows;i++){
        int rowsumI = 0;
        for(int j=0;j<col;j++){
            rowsumI += matrix[i][j];
        }
        maxrowsum = max(maxrowsum,rowsumI);
    }
    return maxrowsum;
}

int main(){
    int matrix[4][3] = {{1,2,40},{4,5,6},{7,8,9},{10,11,12}};
    int rows = 4;
    int col = 3;
    cout<<getmax(matrix,rows,col); 
}