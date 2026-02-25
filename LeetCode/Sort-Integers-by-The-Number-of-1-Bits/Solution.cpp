1class Solution {
2public:
3    	vector<int> sortByBits(vector<int>& arr) {
4        sort(arr.begin(), arr.end(),[](const int &a, const int &b){
5            int countA = __builtin_popcount(a), countB = __builtin_popcount(b);
6            return countA==countB ? a<b:countA<countB;});
7        return arr;
8    }
9};