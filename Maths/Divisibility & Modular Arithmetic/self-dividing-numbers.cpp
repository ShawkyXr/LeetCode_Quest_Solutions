class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> ans;
        for (int i=left ; i <=right ; i++){
            string s = to_string(i);
            bool can = 1;
            for (auto c : s){
                if ( c == '0' || i%(c-'0') != 0 ){
                    can = 0;
                    break;
                }
            }
            if (can) ans.push_back(i);
        }

        return ans;
    }
};