class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        int l=0;int r=l;
        while(r<n.size()){
            if(n[l]==n[r]){
                r++;
            }
            else{
                n[l+1]=n[r];
                l++;r++;
            }
        }
        return l+1;
    }
};