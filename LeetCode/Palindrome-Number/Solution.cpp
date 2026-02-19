1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if(x<0) return false;
5
6        long long rev=0, dummy = x ;
7
8        while(x!=0){
9            int d = x%10;
10            rev = rev *10 + d;
11            x/=10;
12        }
13        if(dummy == rev)return true;
14        else return false;
15    }
16};