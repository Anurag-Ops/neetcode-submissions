class Solution {
public:
    bool check(vector<int>& piles,int mid, int h){
    long long ah = 0;
    for(auto  val:piles){
        ah += val/mid;
        if(val%mid!=0) ah++;
    }
    return ah<=h;

}
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, hi = *max_element(piles.begin(),piles.end());
        int ans = 0;
        while(l<=hi){
            int mid = l +(hi-l)/2;
            if(check(piles,mid,h)){
                ans = mid;
                hi = mid-1;
            }
            else l = mid+1;
        }
        return ans;
    }
};
