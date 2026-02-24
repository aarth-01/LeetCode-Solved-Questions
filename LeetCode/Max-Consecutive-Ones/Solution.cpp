1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int sum=0,maxlen=0, n = nums.size();
5
6        for(int i=0;i<n;i++){
7            if(nums[i]){
8                sum++;
9            }
10            else sum=0;
11            maxlen = max(maxlen, sum);
12        }
13        return maxlen;
14    }
15};