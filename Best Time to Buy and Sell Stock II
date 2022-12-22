class Solution {
public:
    
    int dp[30001][2];
    
    int recurs(int i,bool hold,vector<int>& prices)
    {
    
        if(i>=prices.size())
            return 0;
        
        if(dp[i][hold]!=-1)
            return dp[i][hold];
        
        // 1 indicates we have stock currently
        // 0 indicates no stock is possesed currently
        
        if(hold==1)//sell or do nothing
        {
            return dp[i][hold]=max(recurs(i+1,0,prices)+prices[i],recurs(i+1,1,prices));
        }
        if(hold==0)//buy or do nothing
        {
            return dp[i][hold]=max(recurs(i+1,1,prices)-prices[i],recurs(i+1,0,prices));
        }
        
        return 0;
    }
    
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return recurs(0,0,prices);
    }
};
