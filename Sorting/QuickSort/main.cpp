#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr , int st , int end){
    int pivot = arr[end];
    int idx = st - 1;
    for(int j = st ; j < end ; j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}
void QuickSort(vector<int> &arr , int st , int end){
    if(st < end){
        int pividx = partition(arr,st,end);
        QuickSort(arr,st,pividx-1);
        QuickSort(arr,pividx+1,end);
    }
}
int main(){
    vector<int> arr = {2,6,1,7,8};
    QuickSort(arr,0,arr.size()-1);
    for(int val : arr){
        cout<<val<<" ";
    }
}