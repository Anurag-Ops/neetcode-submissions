class Solution {
public:
    int maxArea(vector<int>& ht) {
        int i=0; 
        int j = ht.size()-1;
        int maxi = INT_MIN;
        while(i<j){
            int hg = min(ht[i],ht[j]);
            int wid = j-i;
            maxi = max(hg*wid,maxi);
            if(ht[i]<ht[j]) i++;
            else j--;
        }
        return maxi;
    }
};
