class Solution {
public:
    int numberOfArrays(string s, int k) {
        int n = s.length();
        vector<long long> dp(n + 1, 0);
        dp[n] = 1;
        
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                continue;
            }
            long long num = 0;
            int j = i;
            while (j < n) {
                try {
                    int x = stoi(s.substr(i, j-i+1));
                    if (x > k) {
                        break;
                    }
                    num += dp[j+1];
                }
                catch (std::out_of_range& e) {
                    break;
                }
                j++;
            }
            dp[i] = num % 1000000007;
        }
        
        return dp[0];
    }
};
