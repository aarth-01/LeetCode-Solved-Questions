class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){
            if(n%3==2) return false;
            n/=3;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna