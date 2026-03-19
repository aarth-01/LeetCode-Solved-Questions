class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int result=0;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]== "+" ||tokens[i]== "*" || tokens[i]== "/"|| tokens[i]== "-" ){
                result = st.top();
                st.pop();
                if(tokens[i]== "+") st.top() = st.top() + result;
                else if(tokens[i]== "-") st.top() = st.top() - result;
                else if(tokens[i]== "*") st.top() = st.top() * result;
                else st.top() = st.top() / result;
            }
            else st.push(stoi(tokens[i]));
        }
        return st.top();
    }
};