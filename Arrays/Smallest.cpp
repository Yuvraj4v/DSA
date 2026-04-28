#include<iostream>
#include <climits>//for using INT_MAX and INT_MIN
using namespace std;
int Smallest(int arr[],int size){
    int smallest = INT_MAX;
    for(int i = 0 ; i < size ; i++){
        smallest = min(arr[i],smallest);//This is the shorter method long one is given below
    
    //     if(arr[i]<smallest){ 
    //         smallest = arr[i];
    //     }

    }
    cout<<"Smallest Element is: "<<smallest<<endl;
}
int main(){

    int array[5];
    cout<<"Enter the values of araay:"<<endl;
    //Giving input elements by for loop
    for(int i=0 ; i < 5 ; i++){
        cin>>array[i];
    }
    Smallest(array,5);



}