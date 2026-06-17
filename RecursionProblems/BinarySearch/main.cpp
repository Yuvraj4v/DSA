#include<iostream>
#include<vector>
using namespace std;
int BS(vector<int> &arr , int st , int end ,int tar){
    if(st<=end){
        int mid = st + (end-st)/2;
        if(arr[mid]==tar){
            return mid;
        }
        else if(arr[mid]<=tar){
            return BS(arr,mid+1,end,tar);
        }
        else{
            return BS(arr,st,mid-1,tar);
        }
    }
    return -1;
}
int search(vector<int> &arr , int tar){
    return BS(arr,0,arr.size(),tar);
}
int main(){
    vector<int> arr = {-1,0,3,5,9,12};
    int target = 9;
    cout<<search(arr,target);
}