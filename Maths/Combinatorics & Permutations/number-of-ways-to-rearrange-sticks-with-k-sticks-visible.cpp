class Solution {
    #define ll long long
public:
    int rearrangeSticks(int n, int k) {
        vector <vector<ll>> dp(n+1, vector <ll>(k+1));
        if (k > n || k <= 0) {
            return 0;
        }

        dp[0][0] = 1;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= k; ++j) {
                ll op1 = dp[i-1][j-1];
                ll op2 = 0;
                if (j <= i-1) { 
                    op2 = ((ll)(i-1) * dp[i-1][j]) % 1000000007;
                }
                dp[i][j] = (op1+op2) % 1000000007;
            }
        }
        return dp[n][k];
    }
};