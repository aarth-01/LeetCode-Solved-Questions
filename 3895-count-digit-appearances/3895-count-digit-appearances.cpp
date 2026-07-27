class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count =0, n=nums.size(); 

        for(int i=0; i< n; i++){
            while(nums[i]>0){
                if(nums[i]%10 == digit) count++;
                nums[i]/=10;
            }
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna