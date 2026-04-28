#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int idx = m+n-1,i = m-1,j = n-1;
        while(i>=0 && j>=0){
            if(A[i]>=B[j]){
                A[idx] = A[i];
                idx--;
                i--;
            }
            else{
            A[idx] = B[j];
            idx--;
            j--;
            }
        }
        while(j>=0){
            A[idx] = B[j];
            idx--;
            j--;
        }
        
    }
int main(){
    vector<int> arr1 = {1,2,3,0,0,0};
    vector<int> arr2 = {2,5,6};
    int m = 3 , n = 3;
    merge(arr1,m,arr2,n);
    for(int i = 0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
}