//leetcode problem number is 1052
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int left = 0;
        int right = 0;
        int count = 0;
        int sum = 0;
        int maxsum = 0;
        while(right < customers.size()){
            if(grumpy[right] == 1){
                sum += customers[right];
            }
            if(grumpy[right] == 0){
                count += customers[right];
            }
            while(right - left + 1 == minutes){
                maxsum = max(maxsum,sum);
                if(grumpy[left] == 1){
                    sum -= customers[left];
                }
                left++;
            }
            right++;
        }
        return count + maxsum;
    }
int main(){
    vector<int> customers = {1,0,1,2,1,1,7,5};
    vector<int> grumpy = {0,1,0,1,0,1,0,1};
    cout<<maxSatisfied(customers,grumpy,3);
}