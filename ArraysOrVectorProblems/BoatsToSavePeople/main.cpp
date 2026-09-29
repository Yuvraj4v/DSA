//leetcode problem number is 881
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int numRescueBoats(vector<int>& people, int limit) {
        int boats = 0;
        int left = 0;
        int right = people.size() - 1;
        sort(people.begin(),people.end());
        while(left <= right){
            if(people[left] + people[right] > limit){
                boats++;
                right--;
            }else{
                boats++;
                left++;
                right--;
            }
        }
        return boats;
    }
int main(){
    vector<int> arr = {3,5,3,4};
    cout<<numRescueBoats(arr,5);
}