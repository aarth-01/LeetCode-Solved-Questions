class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxx=0,left=0,right =1, n1=nums1.size(), n2=nums2.size();

        while(left<n1 && right<n2){
            if(nums1[left] > nums2[right]){
                if(left+1==right){
                    right++;
                }
                left++;
            }
            else{
                maxx = max(maxx, right-left);
                right++;
            }

        }
        return maxx;
    }
};