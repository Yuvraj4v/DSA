#include <iostream>
#include <vector>
using namespace std;
    int singleNonDuplicate(vector<int>& A) {
        int st = 0,end = A.size() - 1;
        if(A.size() == 1)return A[0];
        while(st <= end){
            int mid = st + (end - st)/2;
            if(mid == 0 && A[0] != A[1])return A[mid];
            if(mid == A.size() - 1 && A[A.size()-1] != A[A.size()-2])return A[mid];
            if(A[mid] != A[mid-1] && A[mid] != A[mid+1])return A[mid];
            if(mid%2 == 0){
                if(A[mid-1] == A[mid]){
                    end = mid - 1;
                }
                else{
                    st = mid + 1;
                }    
            }
            else{
                if(A[mid-1] == A[mid]){
                    st = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }            
        }
        return -1;
    }
int main(){
     vector<int> arr = {1,1,2,3,3,4,4,8,8};
     cout<<singleNonDuplicate(arr);
}