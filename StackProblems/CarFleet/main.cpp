//leecode problem number is 853
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, double>> cars;

        for (int i = 0; i < n; i++) {
            cars.push_back({position[i], (double)(target - position[i]) / speed[i]});
        }

        sort(cars.rbegin(), cars.rend());

        int fleets = 0;
        double lastTime = 0;

        for (auto& car : cars) {
            if (car.second > lastTime) {
                fleets++;
                lastTime = car.second;
            }
        }

        return fleets;
    }
int main(){
    vector<int> pos = {10,8,0,5,3};
    vector<int> speed = {2,4,1,1,3};
    cout<<carFleet(12,pos,speed);
}