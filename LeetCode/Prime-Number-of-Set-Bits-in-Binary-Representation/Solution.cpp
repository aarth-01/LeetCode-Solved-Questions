1class Solution {
2public:
3    
4    int countSet(int num){
5        int dig =0;
6        while(num>0){
7            if(num%2==1)dig++;
8            num/=2;
9        }
10        return dig;
11    }
12    int isPrime(int dig){
13        if(dig<=1) return 0;
14        if(dig<=3) return 1;
15        if(dig%2==0 || dig%3==0) return 0;
16
17        for(int i =5; i*i <=dig; i+=6){
18            if(dig%i==0 || dig%(i+2)==0) return 0;
19        }
20        return 1;
21    }
22
23    int countPrimeSetBits(int left, int right) {
24        int count = 0, digit=0;
25
26        for(int i = left;i<=right;i++){
27            digit = countSet(i);
28            count += isPrime(digit);
29        }
30        return count;
31    }
32};