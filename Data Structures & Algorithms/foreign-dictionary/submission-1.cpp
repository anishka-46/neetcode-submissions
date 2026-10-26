class Solution {
   public:
    stack<int> st;
    bool loop(vector<vector<int>>& adj, vector<int>& vis, int node) {
        vis[node] = 1;
        for (auto i : adj[node]) {
            if (vis[i] == 1) {
                return true;
            }
            if (!vis[i]) {
                if (loop(adj, vis, i)) {
                    return true;
                }
            }
        }
        st.push(node);
        vis[node] = 2;
        return false;
    }
    string foreignDictionary(vector<string>& words) {
        string s1, s2;
        vector<bool> p(26, false);

        vector<vector<int>> v(26);
        vector<int> vis(26, 0);
        for (auto& w : words) {
            for (char c : w) p[c - 'a'] = true;
        }
        for (int i = 0; i < words.size() - 1; i++) {
            s1 = words[i];
            s2 = words[i + 1];

            int l = min(s1.length(), s2.length());
            if (s1.length() > s2.length() && s1.substr(0, l) == s2) {
                return "";
            }
            for (int j = 0; j < l; j++) {
                if (s1[j] != s2[j]) {
                    v[s1[j] - 'a'].push_back(s2[j] - 'a');

                    break;
                }
            }
        }
        for (int i = 0; i < 26; i++) {
            if (!vis[i] && p[i]) {
                if (loop(v, vis, i)) {
                    return "";
                }
            }
        }
        string so = "";
        while (!st.empty()) {
            char i = st.top();
            so += (i + 'a');
            st.pop();
        }
        return so;
    }
};
