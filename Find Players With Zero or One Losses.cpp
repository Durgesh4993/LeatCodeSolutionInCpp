class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& m) {
    vector<vector<int>> ans(2);
    int players[100001]={0},loss[100001]={0};
    for(int i=0;i<m.size();i++){
        players[m[i][0]]++;
        players[m[i][1]]++;
        loss[m[i][1]]++;
    }
    for(int i=0;i<100001;i++){
        if(players[i] && loss[i]==0)
            ans[0].push_back(i);
        if(players[i] && loss[i]==1)
            ans[1].push_back(i);
    }
    return ans;
    }
};
