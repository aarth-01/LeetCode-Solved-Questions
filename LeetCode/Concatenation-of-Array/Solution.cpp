1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        int n = nums.size();
5        vector<int>vec(n+n,0);
6
7        for(int i=0;i<n ; i++){
8            vec[i] = nums[i];
9            vec[i + n] = nums[i];
10        }
11        return vec;
12    }
13};