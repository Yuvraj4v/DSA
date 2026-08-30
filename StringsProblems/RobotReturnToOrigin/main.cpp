//leetcode problem number is 657
#include<iostream>
#include<string>
using namespace std;
    bool judgeCircle(string moves) {
        int dircount = 0;
        int poscount = 0;
        for(char move : moves){
            if(move == 'U'){
                poscount++;
            }else if(move == 'D'){
                poscount--;
            }else if(move == 'R'){
                dircount++;
            }else if(move == 'L'){
                dircount--;
            }
        }
        return dircount == 0 && poscount == 0;
    }
int main(){
    string moves = "UD";
    cout<<judgeCircle(moves);
}