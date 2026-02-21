1class Solution {
2public:
3    bool isUgly(int n) {
4        if(n<=0) return false;
5        while(n%5==0)n/=5;
6        while(n%3==0)n/=3;
7        while(n%2==0)n/=2;
8
9        if(n==1)return true;
10        else return false;
11    }
12};