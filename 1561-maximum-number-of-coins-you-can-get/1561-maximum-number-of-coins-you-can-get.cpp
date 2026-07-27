class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<>());

        int sum = 0, turns = piles.size()/3,j=1;

        for(int i=0; i<turns;i++){
            sum+= piles[j];
            j+=2;
        }

        return sum;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna