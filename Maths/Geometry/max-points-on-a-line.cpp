class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int ans = 1, n = points.size();

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int cnt = 2;
                long long x1 = points[i][0], y1 = points[i][1];
                long long x2 = points[j][0], y2 = points[j][1];
                
                for (int k = j + 1; k < n; k++) {
                    long long x3 = points[k][0], y3 = points[k][1];
                    
                    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
                        cnt++;
                    }
                }
                ans = max(ans, cnt);
            }
        }
        return ans;
    }
};