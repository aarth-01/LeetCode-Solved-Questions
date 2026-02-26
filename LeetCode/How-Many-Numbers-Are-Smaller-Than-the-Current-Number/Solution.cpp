1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        unordered_map<int,int>freq;
5        vector<int>vec;
6        for(auto it: nums) freq[it]++;
7
8        for(int i=0;i<nums.size();i++){
9            int sum=0;
10            for(auto it: freq){
11                if(nums[i]>it.first){
12                    sum+=it.second;
13                }
14            }
15            vec.push_back(sum);
16        }
17        return vec;
18    }
19};