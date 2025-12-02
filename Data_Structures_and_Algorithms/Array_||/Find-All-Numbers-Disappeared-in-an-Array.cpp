class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans,freq(n+1);
        for (auto i : nums) freq[i]++;

        for (int i=1 ; i<=n ; i++) {
            if (!freq[i]) ans.push_back(i);
        }

        return ans;
    }
};