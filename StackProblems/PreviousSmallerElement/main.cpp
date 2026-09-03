#include<iostream>
#include<vector>
#include<stack>
using namespace std;
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        stack<int> s;
        vector<int> ans(arr.size(),0);
        
        for(int i = 0 ; i < arr.size() ; i++){
            while(s.size() > 0 && s.top() >= arr[i]){
                s.pop();
            }
            if(s.empty()){
                ans[i] = -1;
            }else{
                ans[i] = s.top();
            }
            s.push(arr[i]);
        }
        return ans;
    }
int main(){
    vector<int> arr = {3,1,0,8,6};
    vector<int> result = prevSmaller(arr);
    for(int val : result){
        cout<<val<<" ";
    }
}