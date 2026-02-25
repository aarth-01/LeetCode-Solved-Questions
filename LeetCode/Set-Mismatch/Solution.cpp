1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        int n= nums.size(), sum1 = (n*(n+1))/2;
5        int sum2= accumulate(nums.begin(), nums.end(),0);
6        sort(nums.begin(),nums.end());
7        for(int i=0; i<n; i++){
8            if(nums[i] == nums[i+1]){
9                int x = nums[i];
10                return {x, sum1-sum2 + x};
11            }
12        }
13        return {0,0};
14    }
15};