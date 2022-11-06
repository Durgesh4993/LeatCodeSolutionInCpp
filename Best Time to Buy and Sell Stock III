class Solution {
    // recursion + memorization
     int solve(int index , int buy, vector<int>& prices,vector<vector<vector<int >>>& dp , int limit){
        if(index == prices.size()) return 0;
         
        if(limit == 0) return 0;
        
        int profit =0;
        if(dp[index][buy][limit] != -1) return dp[index][buy][limit] ;
        if(buy){
            int buyed = (-prices[index] + solve(index+1,0,prices,dp,limit));
            int skiped = (0 + solve(index+1 , 1 , prices,dp,limit));
            profit = max(buyed , skiped);
        }
        else{
            int selled = (prices[index] + solve(index+1 ,1, prices,dp,limit-1));
            int skiped = (0 + solve(index+1 ,0,prices,dp,limit));
            profit = max(selled , skiped);
        }
        return dp[index][buy][limit] = profit;
    }
    // tabulation or bottom up
    int solvetab(vector<int>& prices){
     int n = prices.size();   
     vector<vector<vector<int >>> dp( n+1, vector<vector<int >> (2, vector<int> (3,0)));
        for(int index = n-1; index>=0; index--){
            for(int buy = 0; buy<=1; buy++ ){
                for(int limit = 1; limit <=2; limit++){
                     int profit =0;
            if(buy){
            int buyed = -prices[index] + dp[index+1][0][limit];
            int skiped = 0 + dp[index+1][1][limit];
            profit = max(buyed , skiped);
        }
        else{
            int selled = prices[index] + dp[index+1][1][limit-1];
            int skiped = 0 + dp[index+1][0][limit];
            profit = max(selled , skiped);
        }
                dp[index][buy][limit] = profit;
                }
            }
        }
    return dp[0][1][2];
    }
    // tabulation + space optimization
    int solvetabpro(vector<int>& prices){
     int n = prices.size();   
     //vector<vector<vector<int >>> dp( n+1, vector<vector<int >> (2, vector<int> (3,0)));
      vector<vector<int>> curr(2,vector<int>(3,0));
      vector<vector<int>> next(2,vector<int>(3,0)); 
        for(int index = n-1; index>=0; index--){
            for(int buy = 0; buy<=1; buy++ ){
                for(int limit = 1; limit <=2; limit++){
                     int profit =0;
            if(buy){
            int buyed = -prices[index] + next[0][limit];
            int skiped = 0 + next[1][limit];
            profit = max(buyed , skiped);
        }
        else{
            int selled = prices[index] + next[1][limit-1];
            int skiped = 0 + next[0][limit];
            profit = max(selled , skiped);
        }
                curr[buy][limit] = profit;
                }
            }
            next = curr;
        }
    return next[1][2];
    }
    
    
public:
    int maxProfit(vector<int>& prices) {
        return solvetabpro(prices);
        
    }
};
