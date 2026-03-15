1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        unordered_set<int>seen;
5        vector<int>result;
6        int n = nums.size();
7        for(auto it: nums) seen.insert(it);
8
9
10        for(int i=1;i<=n ; i++){
11            if(!seen.count(i)) result.push_back(i);
12        }
13        return result;
14    }
15};