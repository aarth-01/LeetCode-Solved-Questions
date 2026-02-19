1class Solution {
2public:
3    int pivotInteger(int n) {
4        int mid = n/2,sum1=0, sum2=0;
5        if(n ==1 ) return 1;
6
7
8        while(mid<n){
9            if(sum1>sum2) return -1;
10
11            int sum1 = (mid*(mid+1))/2;
12            int sum2 = (n*(n+1))/2 - (mid*(mid-1))/2;
13
14            if(sum1 == sum2) return mid;
15            mid++;
16        }
17        return -1;
18    }
19};