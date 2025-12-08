class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        int p = 0;
        queue <int> st;

        for (int i=0 ; i<n ; i++){
            st.push(students[i]);
        }

        int cycle = 0;

        while(cycle < st.size()){
            if (st.front() == sandwiches[p]){
                st.pop();
                p++;
                cycle = 0;
            }else{
                cycle++;
                st.push(st.front());
                st.pop();
            }
        }

        return st.size();
    }
};