class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();
        double ans = 0;

        for (int i=0 ; i+2<n ; i++){
            for (int j=i+1 ; j+1<n ; j++){
                for (int k = j+1 ; k<n ;k++){

                    double a = sqrt((points[i][0] - points[j][0])*(points[i][0] - points[j][0])
                            + (points[i][1] - points[j][1])*(points[i][1] - points[j][1]));
                    double b =  sqrt((points[i][0] - points[k][0])*(points[i][0] - points[k][0])
                            + (points[i][1] - points[k][1])*(points[i][1] - points[k][1]));
                    double c =  sqrt((points[j][0] - points[k][0])*(points[j][0] - points[k][0])
                            + (points[j][1] - points[k][1])*(points[j][1] - points[k][1]));

                    double total = (a+b+c)/2.0;

                    double curr_area = sqrt(total * (total-a) * (total-b) * (total-c));
                    
                    ans = max(ans, curr_area);
                }
            }
        }

        return ans;
    }
};