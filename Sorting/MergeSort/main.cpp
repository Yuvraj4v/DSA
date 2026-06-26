#include <iostream>
#include <vector>
#include <string>
using namespace std;
void merge(vector<int> &arr , int start , int mid , int end){
    int i = start;
    int j = mid+1;
    vector<int> temp;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx = 0 ; idx < temp.size() ; idx++){
        arr[idx+start] = temp[idx];
    }
}
void mergesort(vector<int> &arr , int start , int end){
    if(start<end){
        int mid = start + (end - start)/2;
        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}
int main(){
    vector<int> arr = {3,6,2,7,1,8};
    mergesort(arr,0,arr.size()-1);
    for(int x : arr){
        cout<<x<<" ";
    }
}