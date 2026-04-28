#include <iostream>
#include <vector>
#include <climits>
using namespace std;
bool ispossible(vector<int> &A,int n,int m,int max){
    int painters = 1,time = 0;
    for(int i = 0; i < n ; i++){
    if(A[i]>max)return false;
    if(time + A[i] <= max){
    time += A[i];
     }
    else{
    painters++;
    time = A[i];
     }
    }
    if(painters>m){return false;}
    else{return true;}

}
int Painterspartition(vector<int> &A,int n,int m){
    int sum = 0,max_value=INT_MIN;
    for(int i = 0 ; i < n ; i++){
        sum+=A[i];
        max_value=max(max_value,A[i]);
    }
    int st = max_value,end = sum,ans = -1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(ispossible(A,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
return ans;
}

int main(){
    vector<int> arr = {40,30,10,20};
    cout<<Painterspartition(arr,4,2);

}