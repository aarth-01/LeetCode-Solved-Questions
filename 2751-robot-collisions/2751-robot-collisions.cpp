class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();

        vector<pair<int,int>> robots;
        for(int i=0;i<n;i++){
            robots.push_back({positions[i], i});
        }

        sort(robots.begin(), robots.end());

        stack<int> st;

        for(auto &r : robots){
            int curr = r.second;

            while(!st.empty() && directions[st.top()]=='R' && directions[curr]=='L'){
                if(healths[st.top()] < healths[curr]){
                    healths[curr]--;
                    healths[st.top()] = 0;
                    st.pop();
                }
                else if(healths[st.top()] > healths[curr]){
                    healths[st.top()]--;
                    healths[curr] = 0;
                    break;
                }
                else{
                    healths[st.top()] = 0;
                    healths[curr] = 0;
                    st.pop();
                    break;
                }
            }

            if(healths[curr] > 0){
                st.push(curr);
            }
        }

        vector<int> result;
        for(int i=0;i<n;i++){
            if(healths[i] > 0){
                result.push_back(healths[i]);
            }
        }

        return result;
    }
};