#include<iostream>
#include<vector>
using namespace std;
 int maxArea(vector<int>& height) {
        int n = height.size();
        int lp=0;
        int rp=n-1;
        int mw = 0;
        while(lp<rp){
            int width=rp-lp;
            int ht=min(height[lp],height[rp]);
            int area=ht*width;
            mw=max(mw,area);
            if(height[lp]<height[rp]){
                lp++;
            }
            else{
                rp--;
            }
        }
        return mw;        
    }
int main(){
    vector<int> cont = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(cont);
}