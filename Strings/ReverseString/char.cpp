#include<iostream>
#include<vector>
using namespace std;

void reverseString(vector<char>& s) {
    int st = 0, end = s.size() - 1;
    while(st < end){
        swap(s[st], s[end]);
        st++;
        end--;
    }
}

int main(){
    vector<char> str = {'h','e','l','l','o'};
    
    reverseString(str);

    for(char val : str){
        cout << val;
    }

    return 0;
}