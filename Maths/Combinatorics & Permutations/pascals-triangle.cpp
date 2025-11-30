class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> pas;
        pas.push_back({1});
        if (numRows == 1) return pas;
        pas.push_back({1,1});
        if (numRows == 2) return pas;
        for (int i=2 ; i<numRows ; i++){
            vector <int> row = {1};
            for (int j=1 ; j<i ; j++){
                row.push_back(pas[i-1][j-1] + pas[i-1][j]);
            }
            row.push_back({1});
            pas.push_back(row);
        }

        return pas;
    }
};