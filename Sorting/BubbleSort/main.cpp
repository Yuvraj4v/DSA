#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i = 0 ; i < n-1 ; i++){
        bool isSwap = false;
        for(int j = 0; j < n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                isSwap = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!isSwap){
            return;
        }
    }
}
void display(int arr[],int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5] = {4,1,5,2,3};
    bubblesort(arr,5);
    display(arr,5);

}