#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {

    int minPrice = prices[0];
    int maxProfit = 0;

    for(int i = 1; i < prices.size(); i++){

        if(prices[i] < minPrice){
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if(profit > maxProfit){
            maxProfit = profit;
        }
    }

    return maxProfit;
}

int main(){

    int n;
    cout<<"Enter number of days: ";
    cin>>n;

    vector<int> prices(n);

    cout<<"Enter prices: ";
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }

    cout<<"Maximum Profit: "<<maxProfit(prices);

    return 0;
}