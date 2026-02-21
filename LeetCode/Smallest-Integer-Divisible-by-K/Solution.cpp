1class Solution {
2public:
3    int smallestRepunitDivByK(int k) {
4        for (int r = 0, N = 1; N <= k; ++N)
5            if ((r = (r * 10 + 1) % k) == 0)
6                return N;
7        return -1;
8    }
9};