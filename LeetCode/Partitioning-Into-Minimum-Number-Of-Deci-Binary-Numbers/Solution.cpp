1class Solution {
2public:
3    int minPartitions(string n) {
4        int maxnum = 0;
5        for (int i = 0; i < n.length(); i++) {
6            maxnum = max(maxnum, n[i] - '0');
7        }
8        return maxnum;
9    }
10};