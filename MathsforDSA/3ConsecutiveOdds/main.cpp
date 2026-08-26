//leetcode problem number is 1550
#include <iostream>
#include <vector>
using namespace std;
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] % 2 != 0){
               count++;
            }else{
               count = 0;
            }
            if(count == 3){
               return true;
            }
        }
        return false;
     
    }
int main(){
    vector<int> arr = {1,2,34,3,4,5,7,23,12};
    cout<<threeConsecutiveOdds(arr);
}