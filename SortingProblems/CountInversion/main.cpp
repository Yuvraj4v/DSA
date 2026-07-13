#include <iostream>
#include <vector>
#include <string>
using namespace std;
int merge(vector<int> &arr , int start , int mid , int end){
    int i = start;
    int j = mid+1;
    int invcount = 0;
    vector<int> temp;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
            invcount += mid - i + 1;
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
    return invcount;
}
int mergesort(vector<int> &arr , int start , int end){
    int count = 0;
    if(start<end){
        int mid = start + (end - start)/2;
        int leftcount = mergesort(arr,start,mid);
        int rightcount = mergesort(arr,mid+1,end);
        int invcount = merge(arr,start,mid,end);
        count = leftcount + rightcount + invcount;
    }
    return count;
}
int main(){
    vector<int> arr = {6,3,5,2,7};
    cout<<mergesort(arr,0,arr.size()-1)<<endl;
    for(int x : arr){
        cout<<x<<" ";
    }
}