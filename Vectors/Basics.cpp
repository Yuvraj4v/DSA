#include<iostream>
#include<vector>
using namespace std;
int main(){
    //ways of declarations
    vector<int> vec1;
    vector<int> vec2 = {1,2,3};
    vector<int> vec3(3,0);
    for(int i:vec2){
        cout<<i<<endl;
    }
    vec1.push_back(20);
    vec2.pop_back();
    cout<<vec2.size()<<endl;
    cout<<vec3.front()<<endl;
    cout<<vec2.back()<<endl;
    cout<<vec2.at(1)<<endl;


}