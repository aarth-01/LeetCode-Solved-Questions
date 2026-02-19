1class Solution {
2public:
3    bool canMakeArithmeticProgression(vector<int>& arr) {
4        sort(arr.begin(),arr.end());
5
6        int d = arr[1] - arr[0], n=arr.size();
7
8        for(int i=2;i<n;i++){
9            if(arr[i]-arr[i-1]!=d) return false;
10        }
11        return true;
12    }
13};