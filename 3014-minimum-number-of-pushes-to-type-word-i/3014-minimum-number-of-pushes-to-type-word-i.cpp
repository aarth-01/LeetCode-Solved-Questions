class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length(), sum=0,cost=1;

        while(n>0){
            sum = sum + cost * min(8,n);
            n-=8;
            cost++;
        }

        return sum;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna