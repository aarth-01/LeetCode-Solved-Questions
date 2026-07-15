class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int even_sum = n*(n+1), odd_sum = n*n;

        for(int i=odd_sum; i>1; i--){
            if((odd_sum%i==0) && (even_sum%i==0)) return i;
        }
        return 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna