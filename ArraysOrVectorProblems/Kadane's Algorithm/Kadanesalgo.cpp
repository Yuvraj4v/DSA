#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n = 7;
    int arr[7] = {3,-4,5,4,-1,7,-8};
    int cs = 0;
    int max_sum = INT_MIN;
    for(int i = 0; i < n ; i++){
        cs += arr[i];
        max_sum = max(cs,max_sum);
        if(cs<0){
            cs = 0;
        }

    }
    cout<<max_sum;

}