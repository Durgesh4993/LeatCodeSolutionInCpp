class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        using pp = pair<int,pair<int,int>>;
        vector<pp> vtr;
        int n = tasks.size();
        for(int i = 0; i < n; ++i){
            vtr.push_back({tasks[i][0],{tasks[i][1],i}});
        }
        sort(vtr.begin(),vtr.end());
        priority_queue<pp, vector<pp>, greater<pp>> pq;
        vector<int> res;
        int i = 0;
        long long curr_time = vtr[i].first;
        while(i < n|| !pq.empty()){
            while(i < n && curr_time >= vtr[i].first){
                pq.push({vtr[i].second.first,{vtr[i].second.second,vtr[i].first}});
                ++i;
            }
            curr_time = curr_time += pq.top().first;
            res.push_back(pq.top().second.first);
            pq.pop();
            if( i < n && curr_time < vtr[i].first && pq.empty())
                    curr_time = vtr[i].first;
                
        }
        return res;
    }
};
