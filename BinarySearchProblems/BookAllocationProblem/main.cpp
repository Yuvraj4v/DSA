#include <iostream>
#include <vector>
using namespace std;
bool isvalid(vector<int> &A,int n,int m,int max){
    int stud = 1,pages = 0;
    for(int i = 0; i < n ; i++){
    if(A[i]>max)return false;
    if(pages + A[i] <= max){
    pages += A[i];
     }
    else{
    stud++;
    pages = A[i];
     }
    }
    if(stud>m){return false;}
    else{return true;}

}
int Bookallocation(vector<int> &A,int n,int m){
    int sum = 0;
     if(m>n)return -1;
    for(int i = 0 ; i < n ; i++){
        sum+=A[i];
    }
    int st = 0,end = sum,ans = -1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(isvalid(A,n,m,mid)){
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
    vector<int> arr = {2,1,3,4};
    cout<<Bookallocation(arr,4,2);

}