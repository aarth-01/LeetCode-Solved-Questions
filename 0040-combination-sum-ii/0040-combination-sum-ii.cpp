class Solution {
public:
    vector<vector<int>> result;

    void solve(int index, vector<int>& candidates, int target, vector<int>& vec) {
        if (target == 0) {
            result.push_back(vec);
            return;
        }

        for (int i = index; i < candidates.size(); i++) {

            if (i > index && candidates[i] == candidates[i - 1]) continue;

            if (candidates[i] > target) break;

            vec.push_back(candidates[i]);
            solve(i + 1, candidates, target - candidates[i], vec);
            vec.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> vec;
        solve(0, candidates, target, vec);
        return result;
    }
};