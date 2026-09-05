class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
        vector<vector<int>> adj(n+1);
        for(auto i: t){
            int u=i[0];
            int v=i[1];
            if(u==v){return -1;}
            adj[v].push_back(u);
        }
        vector<int> vis(n+1,0);
        vis[0]=1;int ans=-1;
        for(int i=1;i<n+1;i++){
            if(adj[i].size()==n-1){
                ans=i;
            }
        }
        for(int i=1;i<n+1;i++){
            if(i!=ans){
                for(auto j: adj[i]){
                    if(j==ans){
                        return -1;
                    }
                }
            }
        }
        return ans;
    }
};