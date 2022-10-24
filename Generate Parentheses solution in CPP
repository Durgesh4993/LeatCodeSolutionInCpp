class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generateParenthesis(result, "", 0, 0, n);
        return result;
    }
    
    void generateParenthesis(vector<string> &result, string s, int left, int right, int n) {
        if (left == n && right == n) {
            result.push_back(s);
            return;
        }
        if (left < n) {
            generateParenthesis(result, s + "(", left + 1, right, n);
        }
        if (right < left) {
            generateParenthesis(result, s + ")", left, right + 1, n);
        }
    }
};
