class Solution {
    unordered_map<int,int> mp;
    vector<vector<int>> dp;
    bool dfs(vector<int> &nums, int prevJump, int i)
    {
        if(prevJump<0 or i>=nums.size()) return false;
        if(i==nums.size()-1) return true;
        if(dp[prevJump][i]!=-1) return dp[prevJump][i];
        
        bool flag = false;
        
        if(mp.find(nums[i] + prevJump + 1)!=mp.end() && mp[nums[i] + prevJump + 1]>i) flag|=dfs(nums,prevJump + 1, mp[nums[i] + prevJump + 1]);
        
        if(mp.find(nums[i] + prevJump - 1)!=mp.end() && mp[nums[i] + prevJump - 1]>i) flag|=dfs(nums,prevJump - 1, mp[nums[i] + prevJump - 1]);
        
        if(mp.find(nums[i] + prevJump)!=mp.end() && mp[nums[i] + prevJump]>i) flag|=dfs(nums,prevJump, mp[nums[i] + prevJump]);
        
         return dp[prevJump][i] = flag;
    }
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        for(int i=0; i<n; i++) mp[stones[i]] = i;
        dp.resize(n+1,vector<int>(n,-1));
        return dfs(stones,0,0);
    }
};
