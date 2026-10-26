class Solution {
public:
    bool loop (vector<vector<int>> &adj,
    vector<int>&vis,int node){
        vis[node]=1;
        for(auto i: adj[node]){
            if(vis[i]==1){
                return true;
            }
            if(!vis[i]){
            if(loop(adj,vis,i)){
                return true;
            }}
        }
        vis[node]=2;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n);
        vector<int> vis(n,0);
        for(auto i : pre){
            int u = i[0];
            int v=i[1];
            adj[u].push_back(v);
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(loop(adj,vis,i)){
                    return false;
                }
            }
        }
        return true;
    }
};
