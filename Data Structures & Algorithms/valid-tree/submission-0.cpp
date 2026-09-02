class Solution {
public:
bool check(int node, int parent, int& cnt, vector<vector<int>>& adj, vector<int>& vis){
    vis[node]=1;
    cnt+=1;
    for(auto it: adj[node]){
        if(!vis[it]){
            if(!check(it, node, cnt, adj, vis)) return false; 
        }
        else if(it != parent) return false;
    }
    return true;
}
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<int>vis(n, 0);
        vector<vector<int>>adj(n);
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        int cnt=0;
        if(!check(0, -1, cnt, adj, vis)) return false;
        return cnt== n;
    }
};
