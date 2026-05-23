class Solution {
public:
    bool check(vector<int>& nums) {
        bool fault = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
            if (nums[i] > nums[(i + 1) % n] && exchange(fault, 1))
                return 0;

        return 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna