class Solution {
public:
    int minimumPushes(string word) {
        
        unordered_map<char,int>freq;

        for(auto it:word) freq[it]++;

        vector<pair<char,int>>vec(freq.begin(),freq.end());

        sort(vec.begin(),vec.end(),[](pair<char,int>a,pair<char,int>b){
            return a.second>b.second;
        });

        int n = vec.size(), cost =0,sum=0;
        for(int i=0; i<n ;i++){
            if(i%8==0) cost++;
            sum = sum + cost* vec[i].second;
        }

        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna