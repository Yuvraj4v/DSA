#include<iostream>
using namespace std;
bool issorted(int arr[], int n){
    if(n==0 || n==1)return true;
    return arr[n-1]>=arr[n-2] && issorted(arr,n-1);
}
int main(){
    int arr[] = {2,3,5,2,1};
    cout<<issorted(arr,5);
}