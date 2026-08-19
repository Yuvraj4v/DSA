//leetcode problem number 2798
#include<iostream>
#include<vector>
using namespace std;
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for(int i = 0 ; i < hours.size() ; i++){
            if(hours[i] >= target){
                count++;
            }
        }
        return count;
    }
int main(){
    vector<int> arr = {0,1,2,3,4};
    cout<<numberOfEmployeesWhoMetTarget(arr,2);
}