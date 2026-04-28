#include<iostream>
#include<vector>
using namespace std;

int Majorityelement(vector<int> nums){
    int n = nums.size();
    
    for(int val : nums){
        int freq = 0;
        
        for(int el : nums){
            if(el == val){
                freq++;
            }
        }
        
        if(freq > n/2){
            return val;
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