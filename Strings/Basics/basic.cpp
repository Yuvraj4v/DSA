#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> str = {'a','b','c','d','\0'};

    for(char val : str){
        if(val == '\0') break;  
        cout << val << " ";
    }

    cout << endl;

    char str1[6];
    cin.getline(str1, 6);

    cout << str1 <<endl;
    string strin1 = {"Yuvraj"};
    string strin2 = {"Chauhan"};
    string strin3 = strin1 + strin2;
    cout<<strin3<<endl;
    string strin4;
    getline(cin,strin3);
    cout<<strin3;

    return 0;
}