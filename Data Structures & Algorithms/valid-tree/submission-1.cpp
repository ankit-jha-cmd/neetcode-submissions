class Solution {
public:
bool dfs(vector<vector<int>>& adj, int node, int parent, int& cnt, vector<int>&vis){
    vis[node]=1;
    cnt+=1;
    for(auto it: adj[node]){
        if(!vis[it]){
            if(!dfs(adj, it, node, cnt, vis)) return false;
        }
        else{
            if(it!=parent) return false;
        }
    }
    return true;
}
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            int a=edges[i][0];
            int b=edges[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int cnt=0;
        vector<int>vis(n, 0);
        if(!dfs(adj, 0, -1, cnt, vis)) return false;
        return cnt==n;
    }
};
