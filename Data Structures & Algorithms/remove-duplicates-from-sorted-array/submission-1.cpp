class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i: nums){
            s.insert(i);

        }
        int i=0;
    for (auto it = s.begin(); it != s.end(); ++it) {
nums[i]=*it;i++;
}
        return s.size();
    }
};