class Solution {
public:
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        const int n = locations.size();
        dp.resize(fuel + 1, vector<int>(n, -1));
        
        return solve(start, finish, fuel, locations);
    }
private:
    vector<vector<int>> dp;
    const int kMod = 1e9 + 7;
    int solve(int currCity, int endCity, int fuel, const vector<int>& locations){
        if(fuel < 0) return 0;
        if(~dp[fuel][currCity])
            return dp[fuel][currCity];
        
        int ans = (currCity == endCity);
        for(int nextCity = 0; nextCity < locations.size(); ++nextCity)
            if(nextCity != currCity){
                ans = (ans + solve(nextCity, endCity, fuel - abs(locations[currCity] - locations[nextCity]), locations)) % kMod;
            }
        return dp[fuel][currCity] = ans;
    }
};
