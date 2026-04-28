#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Majorityelement(vector<int> nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int freq=1;
    int ans=nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans=nums[i];
        }
        if(freq>n/2){
            return ans;
        }
    }
    return -1; 
}

int main(){
    vector<int> nums = {2,2,1,1,1};
    
    int result = Majorityelement(nums);
    
    if(result != -1)
        cout << "Majority Element is: " << result;
    else
        cout << "No Majority Element found";
        
    return 0;
}