class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;int zero=0;
        for(int i: nums){
            if(i!=0){
            p*=i;
            }
            else {
                zero++;
            }
        }
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0&&zero==0){
                ans[i]=p/nums[i];
            }
            else if(nums[i]==0&&zero==1){
                ans[i]=p;
            }
            else {
                ans[i]=0;
            }
        }
        return ans;

    }
};
