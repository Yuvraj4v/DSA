#include<iostream>
#include<vector>
using namespace std;
int maxwater(vector<int> &container){
    int mw = 0;
    for(int i=0;i<container.size();i++){
        for(int j=i+1;j<container.size();j++){
            int width=j-i;
            int height=min(container[i],container[j]);
            int area = height*width;
            mw=max(mw,area);
        }
    }
    return mw;

}
int main(){
    vector<int> cont = {1,8,6,2,5,4,8,3,7};
    cout<<maxwater(cont);

}