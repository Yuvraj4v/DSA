//leetcode problem number is 134
#include<iostream>
#include<vector>
using namespace std;
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas = 0;
        int totalcost = 0;
        int currgas = 0;
        int start = 0;

        for(int i = 0 ; i < gas.size() ; i++){
            totalgas += gas[i];
            totalcost += cost[i];
            currgas += gas[i] - cost[i];
            if(currgas < 0){
                start = i + 1;
                currgas = 0;
            }
        }
        return totalgas < totalcost ? -1 : start;
    }
int main(){
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};
    cout<<canCompleteCircuit(gas,cost);
}