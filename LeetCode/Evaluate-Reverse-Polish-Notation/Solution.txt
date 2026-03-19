1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int>st;
5        int result=0;
6        for(int i=0;i<tokens.size();i++){
7            if(tokens[i]== "+" ||tokens[i]== "*" || tokens[i]== "/"|| tokens[i]== "-" ){
8                result = st.top();
9                st.pop();
10                if(tokens[i]== "+") st.top() = st.top() + result;
11                else if(tokens[i]== "-") st.top() = st.top() - result;
12                else if(tokens[i]== "*") st.top() = st.top() * result;
13                else st.top() = st.top() / result;
14            }
15            else st.push(stoi(tokens[i]));
16        }
17        return st.top();
18    }
19};