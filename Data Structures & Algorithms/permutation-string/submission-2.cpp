class Solution {
public:
    bool checkInclusion(string s1, string s) {
        map<char,int> m;
        for(int i=0;i<s1.length();i++){
            m[s1[i]]++;
        }
        int l=0;
        while(l<s.length()){
            if(m[s[l]]>0){
                map<char,int> mp=m;
                mp[s[l]]--;
                int count=1;
                int r=l+1;
                while(r<s.length()){
                    
                    if(mp[s[r]]<=0){break;}
                    mp[s[r]]--;
                    count++;
                  
                    r++;
                }
                if(count==s1.length()){
                    return true;
                }
            }
            l++;
        }
        return false;
    }
};
