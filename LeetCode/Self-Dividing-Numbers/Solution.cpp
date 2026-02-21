1class Solution {
2public:
3    vector<int> selfDividingNumbers(int left, int right) {
4        vector<int>vec;
5        for(int i=left;i<=right;i++){
6            int temp = i;
7            while(temp!=0){
8                int digit = temp %10;
9                if(digit==0 || i%digit!=0){
10                    break;
11                }
12                temp/=10;
13            }
14            if(temp==0) vec.push_back(i);
15
16        }
17        return vec;
18    }
19};