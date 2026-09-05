class Solution {
public:
    bool isPalindrome(string s) {
        string p;
        int l=0;
        int r=s.length()-1;
        while(l<=r){
            if(s[r]<91&&s[r]>64){
                s[r]+=32;
            }
            if(s[l]<91&&s[l]>64){
                s[l]+=32;
            }
            if(s[r]<97||s[r]>122){
                if(s[r]<48||s[r]>57){
                r--;continue;}
            }
            if(s[l]<97||s[l]>122){
                if(s[l]<48||s[l]>57){
                l++;continue;}
            }
            
            if(s[l]!=s[r]){
                return false;
            }
            l++;r--;
        }return true;
    }
};
