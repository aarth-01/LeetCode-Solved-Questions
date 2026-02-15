1class Solution {
2public:
3    string addBinary(string a, string b) {
4        int i = a.length()-1, j = b.length()-1;
5        int carry = 0;
6        string s = "";
7
8        while(i>=0 || j>=0 || carry){
9            int sum = carry;
10
11            if(i>=0) sum += a[i--]-'0';
12            if(j>=0) sum += b[j--]-'0';
13
14            s += (sum%2)+'0';
15            carry = sum/2;
16        }
17
18        reverse(s.begin(), s.end());
19        return s;
20    }
21};
22