class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;  i<n; i++){
            mp[nums[i]]++;
        }
        int mx = INT_MIN;
        int m = 0;
        while(k!=0){
            for(auto &i:mp){
                if(i.second>mx){
                    mx = i.second;
                    m = i.first;
                }
                
            }
            ans.push_back(m);
                k--;
                mp.erase(m);
                mx = INT_MIN;
        }
        return ans;
    }
};
