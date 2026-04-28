#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the values of araay:"<<endl;
    //Giving input elements by for loop
    for(int i=0 ; i < 5 ; i++){
        cin>>arr[i];
    }
    //printing elements by for loop
    cout<<"values are: "<<endl;
    for(int i=0 ; i < 5 ; i++){
        cout<<" "<<arr[i];
    }


}