class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int area = n*n;

        for (int i=0 ; i<n ; i++) {
            int mxy = 0;
            for (int j=0 ; j<n ; j++){
                mxy = max(mxy, grid[j][i]);
            }
            area += mxy;
            area += *max_element(grid[i].begin(),grid[i].end());
            area -= count(grid[i].begin(),grid[i].end(), 0);
        }

        return area;
    }
};