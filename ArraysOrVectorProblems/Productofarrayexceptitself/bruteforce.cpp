#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> ans(nums.size(),1);
    int n = nums.size();

    for(int i=0;i<n;i++){
        int prod = 1;
        for(int j=0;j<n;j++){
            if(i!=j){
                prod *= nums[j];
            }
        }
        ans[i] = prod;
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,4};
    
    vector<int> result = productExceptSelf(arr);

    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }

    return 0;
}