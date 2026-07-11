class Solution {
public:
vector<int>parent,rank;
 int find(int x){
    if(x==parent[x]){
        return x;
    }
    return parent[x] = find(parent[x]);
 }
 void uni(int x, int y){
    int x_par = find(x);
    int y_par = find(y);
    if(x_par == y_par){
        return ;
    }
    if(rank[x_par]>rank[y_par]){
        parent[y_par] = x_par; 
    }
    else if(rank[x_par]<rank[y_par]){
        parent[x_par] = y_par;
    }
    else {
        parent[x_par] = y_par;
        rank[y_par]++;
    }
 }
    int countComponents(int n, vector<vector<int>>& edges) {
        parent.resize(n);
        rank.assign(n,1);
        for(int i=0;i<n; i++){
            parent[i] = i;
        }
        for(auto &it:edges){
            int a = it[0];
            int b = it[1];
            uni(a,b);
        }
        set<int>st;
        for(int i=0; i<n; i++){
            st.insert(find(i));
        }
        return st.size();
    }
};
