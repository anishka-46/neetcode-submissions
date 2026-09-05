class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            int l=i+1,r=n-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==0){
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    if(find(ans.begin(),ans.end(),v)==ans.end()){            
                        ans.push_back(v);
                    }l++;
                }
                else if(sum>0){r--;}
                else{
                    l++;
                }
            }

        }return ans;
    }
};
