class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n!=m) return false;
        unordered_map<char,int>mp;
        for(auto val:s){
            mp[val]++;
        }
        for(int i=0; i<m; i++){
            if(mp.find(t[i])!=mp.end()){
                mp[t[i]]--;
                if(mp[t[i]]==0) mp.erase(t[i]);
            }
        }
        if(mp.size()==0) return true;
        return false;
    }
};
