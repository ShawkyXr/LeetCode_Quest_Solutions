class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector <int> ans(n);
        stack <pair<int,int>> st;
        int prev_time = 0, prev_id = -1;

        for (auto log : logs){
            int id = 0, time = 0;
            string op = "";
            int p = 0;
            while(log[p] != ':'){
                id += log[p]-'0';
                p++;
                if (log[p] != ':') id *= 10;
            }
            p++;
            while(log[p] != ':'){
                op += log[p];
                p++;
            }
            p++;
            while(p < log.size()){
                time += log[p]-'0';
                time *= 10;
                p++;
            }
            time /= 10;

            if (op == "start"){
                if (!st.empty() ){
                    ans[st.top().first] += time - prev_time;
                }
                st.push({id,time});
                prev_time = time;
            }else{
                ans[id] += time - prev_time + 1;
                st.pop();
                prev_time = time+1;
            }
            
            prev_id = id;
        }

        return ans;
    }
};