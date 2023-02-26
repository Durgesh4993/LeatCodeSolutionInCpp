//bottom up approach - dp - The time complexity of the bottom-up approach is O(mn), where m and n are the lengths of the input strings word1 and word2. This is because we are computing each subproblem once, and we are using the results of the previous subproblems to compute the current subproblem. The space complexity of this approach is O(mn) as well, because we are using a two-dimensional array of size m*n to store the results of the subproblems. However, we can reduce the space complexity to O(min(m,n)) by only storing the results of the current and previous rows of the two-dimensional array.

class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
    
        // Create a table to store the minimum edit distance between substrings of word1 and word2
        int dp[m+1][n+1];
    
        // Initialize the table for the base cases
        for (int i = 0; i <= m; i++) {
            dp[i][0] = i;
        }
        for (int j = 0; j <= n; j++) {
            dp[0][j] = j;
        }
    
        // Compute the minimum edit distance for all substrings of word1 and word2
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (word1[i-1] == word2[j-1]) {
                    // Last characters match, no operation required
                    dp[i][j] = dp[i-1][j-1];
                } 
                else {
                    // Insert a character into word1
                    int insertOp = dp[i][j-1]; 
                    // Delete a character from word1
                    int deleteOp = dp[i-1][j]; 
                    // Replace a character in word1 with a character in word2
                    int replaceOp = dp[i-1][j-1]; 
                    // Take the minimum of the three operations and add 1
                    dp[i][j] = 1 + min({insertOp, deleteOp, replaceOp});
                }
            }
        }
        // Return the minimum edit distance between the entire strings
        return dp[m][n];
    }
};
