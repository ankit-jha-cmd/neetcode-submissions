class Solution {
public:
void fn(vector<vector<int>>&adj, int n, int node, vector<int>&vis){
    vis[node]=1;
    for(auto it: adj[node]){
        if(!vis[it]){
            fn(adj, n, it, vis);
        }
    }
}
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            int a=edges[i][0];
            int b=edges[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        vector<int>vis(n);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                fn(adj, n, i, vis);
                cnt++;
            }
        }
        return cnt;
    }
};
