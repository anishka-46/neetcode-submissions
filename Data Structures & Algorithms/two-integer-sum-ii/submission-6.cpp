class Solution {
public:
    vector<int> twoSum(vector<int>& num, int t) {
       int l=0;
       int n=num.size();vector<int> ans;int r=n-1;
       while(l<r)
           { if(num[l]+num[r]==t){
                ans.push_back(l+1);
                ans.push_back(r+1);
                return ans;
            }
            if(num[l]+num[r]>t){
                r--;
            }
            else{
                l++;
            }
        
       }return ans;
    }
};
