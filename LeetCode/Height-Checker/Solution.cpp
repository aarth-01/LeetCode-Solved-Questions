1class Solution {
2public:
3    int heightChecker(vector<int>& heights) {
4        vector<int>vec;
5        vec = heights;
6        sort(vec.begin(), vec.end());
7        int count=0, n = heights.size();
8        for(int i=0;i<n;i++){
9            if(vec[i]!=heights[i]) count++;
10        }
11        return count;
12    }
13};