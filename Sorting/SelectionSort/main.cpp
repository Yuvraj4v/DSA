#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i = 0 ; i < n - 1 ; i++){
        int smallestidx = i;
        for(int j = i + 1 ; j < n ; j++){
            if(arr[j]<arr[smallestidx]){
                smallestidx = j;
            }
        }
        swap(arr[i],arr[smallestidx]);
    }
}
void display(int arr[],int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5] = {4,1,5,2,3};
    selectionsort(arr,5);
    display(arr,5);

}