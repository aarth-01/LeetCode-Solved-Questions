class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int maxx = 0;

        for(int num : nums) mpp[num]++;

        for(auto it : mpp){
            if(mpp.count(it.first + 1)){
                maxx = max(maxx, it.second + mpp[it.first + 1]);
            }
        }
        return maxx;
    }
};