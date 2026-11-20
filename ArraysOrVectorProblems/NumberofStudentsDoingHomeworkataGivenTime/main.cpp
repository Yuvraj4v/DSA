// leetcode problem number is 1450
#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count = 0;
        for(int i = 0 ; i < startTime.size() ; i++){
            if(startTime[i] <= queryTime && queryTime <= endTime[i]){
                count++;
            }
        }
        return count;
    }
int main(){
    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {3,2,7};
    cout<<busyStudent(arr1,arr2,4);
}