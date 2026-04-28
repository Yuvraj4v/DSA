#include<iostream>
using namespace std;
int main(){
    int size=5;
    int array[5];
    cout<<"Enter the values of araay:"<<endl;
    //Giving input elements by for loop
    for(int i=0 ; i < 5 ; i++){
        cin>>array[i];
    }
    int start=0;
    int end=size-1;
    for(int i=0 ; i < 5 ; i++){
        while(start<end){
            swap(array[start],array[end]);
            start++;
            end--;
        }
        
    }
    cout<<"Swapped array: "<<endl;
    for(int i=0 ; i < 5 ; i++){
        cout<<" "<<array[i];
    }

}