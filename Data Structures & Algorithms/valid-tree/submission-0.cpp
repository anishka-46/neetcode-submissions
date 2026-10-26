class Solution {
public:
    bool loop (vector<vector<int>>& adj,vector<int> &vis,int node,int parent){
        vis[node]=1;
        for(auto i: adj[node]){
            if(i==parent){continue;}
            if(vis[i]==1||loop(adj,vis,i,node)){
                return true;
            }
        }
        return false;
    }
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto i: edges){
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> vis(n,0);
        if(loop(adj,vis,0,-1)){
            return false;
        }
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                return false;
            }
        }
        return true;
        
    }
};
