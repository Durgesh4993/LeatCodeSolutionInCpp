class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) {
            return "1";
        }
        string prev = countAndSay(n - 1);
        string curr = "";
        int count = 1;
        
        for (int i = 1; i < prev.size(); i++) {
            if (prev[i] == prev[i - 1]) {
                count++;
            } else {
                curr += to_string(count) + prev[i - 1];
                count = 1;
            }
        }
        curr += to_string(count) + prev[prev.size() - 1];
        return curr;
    }
};
