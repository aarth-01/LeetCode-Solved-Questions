class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size(), l=colors[0], r=colors[n-1];
        int lMax=0, rMax=0;
        for(int i=0; i<n; i++){
            int c=colors[i];
            if (l!=c) lMax=max(lMax, i);
            if (r!=c) rMax=max(rMax, n-1-i);
        }
        return max(lMax, rMax);
    }
};