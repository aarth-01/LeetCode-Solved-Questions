1class Solution {
2public:
3    int distributeCandies(vector<int>& candyType) {
4        unordered_set<int>freq;
5        int n = candyType.size()/2, count=0;
6        for(auto it:candyType){
7            if(!freq.count(it)){
8                count++;
9                freq.insert(it);
10            }
11        }
12        return min(n, count);
13    }
14};