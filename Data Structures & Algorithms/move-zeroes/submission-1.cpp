class Solution {
public:
    void moveZeroes(vector<int>& n) {
        int r=0;
        int l=0;
        while(r<n.size()){

            if(n[l]==0&&n[r]!=0){
                n[l]=n[r];
                n[r]=0;
                l++;
            }
            else if(n[l]!=0){l++;}
            r++;
        }
    }
};