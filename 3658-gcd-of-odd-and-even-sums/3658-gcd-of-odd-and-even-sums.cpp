class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int even_sum = n*(n+1), odd_sum = n*n;

        
        return gcd(even_sum, odd_sum);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna