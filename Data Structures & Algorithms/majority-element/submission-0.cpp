class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 1;
        int maxele = nums[0];
        for(int i=0;i<nums.size(); i++){
            if(nums[i]==maxele) cnt++;
            if(nums[i]!=maxele) cnt--;
            if(cnt==0){
                maxele = nums[i];
                cnt = 1;
            }

        }
        return maxele;
    }
};