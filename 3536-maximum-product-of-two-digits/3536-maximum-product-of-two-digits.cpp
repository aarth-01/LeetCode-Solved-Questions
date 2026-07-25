class Solution {
public:
    int maxProduct(int n) {
        vector<int>vec(10,0);
        int prod = 1, count=2, i=9;
        while(n>0){
            vec[n%10]++;
            n/=10;
            if(vec[9]==2) return 81;
        }

        while(i>=0){
            if(vec[i]){
                prod *= i;
                vec[i]--;
                count--;
            }
            else i--;
            if(!count)return prod;
        }

        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna