#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> freq;
        for(char c : text){
            freq[c]++;
        }

        string s1 = "ban";
        string s2 = "lo";
        int small = INT_MAX;

        for(char c : s1){
            small = min(small, freq[c]);
        }

        for(char c : s2){
            small = min(small, freq[c] / 2);
        }

        return small;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna