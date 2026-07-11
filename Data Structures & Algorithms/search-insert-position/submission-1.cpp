class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low  = 0, high = nums.size()-1;
        while(low<=high){
            int gus = (low+high)/2;
            if(nums[gus]==target) return gus;
            if(nums[gus]<target) low = gus+1;
            else high = gus-1;
        }
        return low;
    }
};