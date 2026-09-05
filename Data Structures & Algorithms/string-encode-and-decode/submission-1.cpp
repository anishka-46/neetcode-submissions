class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(string i: strs){
            for(char j: i){
                s+=j;
                }
                s+="/*";
                
            
        }return s;
    }

    vector<string> decode(string s) {
        vector<string > ans;
        string a="";
        for(int i=0;i< s.length();i++){
            if(s[i]=='*'&&s[i-1]=='/'){
                continue;
            }
            if(s[i]=='/'&&s[i+1]=='*'){
            ans.push_back(a);
            a="";
             
            }
            else{
                a+=s[i];
            }
        }
    return ans;}
};
