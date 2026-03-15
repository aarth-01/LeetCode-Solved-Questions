1class Solution {
2public:
3    vector<string> buildArray(vector<int>& target, int n) {
4        vector<string>vec;
5
6        for(int i=1 , j=0; i<=n, j<target.size(); i++){
7            if(i== target[j]){
8                vec.push_back("Push");
9                j++;
10            }
11            else{
12                vec.push_back("Push");
13                vec.push_back("Pop");
14            }
15        }
16        return vec;
17    }
18};