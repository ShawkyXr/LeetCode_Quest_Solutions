class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, ones = 0;
        for (auto i : nums){
            if (i==0){
                ans = max(ans,ones);
                ones = 0;
            }else{
                ones++;
            }
        }
        ans = max(ans,ones);
        return ans;
    }
};