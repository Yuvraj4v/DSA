//leetcode problem number 118
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    vector<int> generaterow(int row){
        long long ans = 1;
        vector<int> ansrow;
        ansrow.push_back(1);
        for(int col = 1 ; col < row ; col++){
            ans = ans*(row-col);
            ans = ans/(col);
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        for(int i = 1 ; i <= numRows ; i++){
            answer.push_back(generaterow(i));
        }
        return answer;
        
    }
int main(){
    int n = 5;
    vector<vector<int>> result = generate(n);
    for(int i = 0 ; i < result.size() ; i++){
        for(int j = 0 ; j < result[i].size() ; j++){
            cout<<result[i][j]<<" ";
        }
            cout<<endl;
        }   
}