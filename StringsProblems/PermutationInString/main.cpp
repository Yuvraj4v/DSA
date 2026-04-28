#include<iostream>
#include<vector>
using namespace std;
bool isFreqsame(int freq1[],int freq2[]){
        for(int i = 0 ; i < 26 ; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i = 0 ; i < s1.length() ; i++){
            freq[s1[i] - 'a']++;
        }
        int windsize = s1.length();
        for(int i = 0 ; i < s2.length() ; i++){
            int winidx = 0,idx = i;
            int freqwind[26] = {0};
            while(winidx<windsize && idx < s2.length()){
                freqwind[s2[idx] - 'a']++;
                winidx++;
                idx++;
            }
        if(isFreqsame(freq,freqwind)){
            return true;
        }
        }

        return false;
    }
int main(){
    string s1 = "ab";
    string s2 = "aidbaooo";
    cout<<checkInclusion(s1,s2);

}