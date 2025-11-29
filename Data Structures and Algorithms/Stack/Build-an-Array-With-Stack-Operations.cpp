class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector <string> ans;
        int p = 0;

        for (int i=1 ; i<=target.back() ; i++){
            if (i < target[p]){
                ans.push_back("Push");
                ans.push_back("Pop");
            }else{
                ans.push_back("Push");
                p++;
            }
        }

        return ans;
    }
};