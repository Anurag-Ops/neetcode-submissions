class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r = 0;
        int l = 0;
        int n = s.size();
        int len = INT_MIN;
        unordered_map<char,int>mp;
        if(s=="") return 0;
        while(r<n){
            mp[s[r]]++;
            while(mp[s[r]]>1){
                mp[s[l]]--;
                if(mp[s[l]]==0) mp.erase(s[l]);
                l++;
            }
            len = max(len,r-l+1);
            r++;
        }
        return len;
    }
};
