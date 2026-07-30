class Solution {
public:
    int minOperations(int n) {
        int sum=0;
        n--;
        while(n>0){
            sum+=n;
            n-=2;
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna