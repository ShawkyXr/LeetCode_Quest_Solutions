class Solution {
    string to_st(vector <int> &v){
        string ret = "";
        for (auto i : v) ret+= char(i+'0');
        return ret;
    }
public:
    string getPermutation(int n, int k) {
        vector <int> per;
        for (int i=1 ; i<=n ; i++) per.push_back(i);
        int to_k = 1;
        string ans = "";
        if (to_k == k) return to_st(per);
        while(next_permutation(per.begin(),per.end())){
            to_k++;
            if (to_k == k) return to_st(per);
        }
        return to_st(per);
    }
};