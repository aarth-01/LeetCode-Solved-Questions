class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        vector<pair<int, int>> vec;
        int mini = INT_MAX;

        if (nums.size() < 3)
            return -1;

        for (int i = 0; i < nums.size(); i++) {
            vec.push_back({nums[i], i});
        }
        sort(vec.begin(), vec.end(), [](pair<int, int> a, pair<int, int> b) {
            if (a.first == b.first)
                return a.second < b.second;
            return a.first < b.first;
        });

        for (int i = 0; i < vec.size() - 2; i++) {
            if ((vec[i].first == vec[i + 1].first) &&
                (vec[i].first == vec[i + 2].first)) {
                int sum = (vec[i + 2].second - vec[i].second) +
                          (vec[i + 2].second - vec[i + 1].second) +
                          (vec[i + 1].second - vec[i].second);
                mini = min(mini, sum);
            }
        }

        return mini == INT_MAX ? -1 : mini;
    }
};