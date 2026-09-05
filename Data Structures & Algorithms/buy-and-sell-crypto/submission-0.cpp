class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size()-1;
        if(n==0){return 0;}
        int profit=max(p[1]-p[0],0);
        
        int l=0;
        int r=1;
        while(l<n){
            if(p[l]>p[l+1]){
                l++;
            }
            r=l+1;
            while(r<=n){
                profit=max(profit,p[r]-p[l]);
                r++;
            }
            int s=profit;int k=l;
            l++;
            while(l<n){

                if(s+p[k]-p[l]>s){
                    break;
                }l++;
            }
        }
        return profit;
    }
};