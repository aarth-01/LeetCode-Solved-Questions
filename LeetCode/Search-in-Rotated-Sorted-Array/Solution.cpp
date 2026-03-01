1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int low = 0, high = nums.size()-1;
5
6        while(low <= high){
7            int mid = (low + high)/2;
8
9            if(nums[mid]==target) return mid;
10
11            else if(nums[low]<=nums[mid]){
12                if(nums[mid]>target && target >= nums[low])
13                    high = mid-1;
14                else low = mid+1;
15            }
16            else{
17                if(nums[high]>=target && nums[mid]<target) 
18                    low = mid+1;
19                else high = mid-1;
20            }
21        } 
22        return -1;
23    }
24};