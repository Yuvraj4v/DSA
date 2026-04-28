#include<iostream>
using namespace std;
//linear search function
int LinearSearch(int arr[],int size,int target){
    for(int i = 0;i < size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;

}
int main(){

    int array[5];
    cout<<"Enter the values of araay:"<<endl;
    //Giving input elements by for loop
    for(int i=0 ; i < 5 ; i++){
        cin>>array[i];
    }
    int result = LinearSearch(array,5,10);
    if(result == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index:"<<result<<endl;
    }

}