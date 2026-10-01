//leetcode problem number is 605
#include<iostream>
#include<vector>
using namespace std;
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i = 0 ; i < flowerbed.size() ; i++){
            if(n == 0){
                return true;
            }
            if(flowerbed[i] == 0){
                bool left = (i==0 || flowerbed[i-1] == 0);
                bool right = (i == flowerbed.size() - 1 || flowerbed[i+1] == 0);
                if(left && right){
                    flowerbed[i] = 1;
                    n--;
                }
            }
            
        }
        return n==0;
    }
int main(){
    vector<int> arr = {1,0,0,0,1};
    cout<<canPlaceFlowers(arr,1);
}