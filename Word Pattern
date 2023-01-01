class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, size_t> dp;
        unordered_set<size_t> seenWords;
        istringstream ss(s);
        string word; 
        size_t h;
        int i = 0;
        while (ss >> word) {
            h = hash<string>()(word);
            if (dp[pattern[i]] != 0) {
                if (dp[pattern[i]] != h) return false;
            } else if (seenWords.find(h) != seenWords.end()) {
                return false;
            } else {
                seenWords.insert(h);
                dp[pattern[i]] = h;
            }
            i++;
        }
        if (pattern.size() > i)
            return false;
        return true;
    }
};
