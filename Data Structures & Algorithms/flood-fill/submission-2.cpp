class Solution {
public:
    int dr[4]={-1,0,1,0};
    int dc[4]={0,-1,0,1};
    void dfs(vector<vector<int>>& im,vector<vector<int>> & v, int sr,int sc, int color){
        int cl=im[sr][sc];
        v[sr][sc]=color;
        for(int i=0;i<4;i++){
            int r=sr+dr[i];
            int c=sc+dc[i];
            if(r>=0&&r<v.size()&&c>=0&&c<v[0].size()&&
            im[r][c]==cl&&v[r][c]!=color){
                dfs(im,v,r,c,color);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& im, int sr, int sc, int color) {
        vector<vector<int>> v=im;
        
        dfs(im,v,sr,sc,color);
        return v;
    }
};