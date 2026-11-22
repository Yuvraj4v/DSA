// leetcode problem number is 2024
#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
int maxConsecutiveAnswers(string answerKey, int k) {
        int countT = 0;
        int countF = 0;
        int left = 0;
        int ans = 0;
        for (int right = 0; right < answerKey.size(); right++) {
            if (answerKey[right] == 'T') {
                countT++;
            } else {
                countF++;
            }
            while (min(countF, countT) > k) {
                if (answerKey[left] == 'T') {
                    countT--;
                } else {
                    countF--;
                }
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
int main(){
    string arr = "TTFF";
    cout<<maxConsecutiveAnswers(arr,2);
}