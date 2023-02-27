class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        sort(candidates.begin(), candidates.end());
        combinationSum2(candidates, target, 0, current, result);
        return result;
    }
    
    void combinationSum2(vector<int>& candidates, int target, int start, vector<int>& current, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        for (int i = start; i < candidates.size() && target >= candidates[i]; i++) {
            if (i == start || candidates[i] != candidates[i - 1]) {
                current.push_back(candidates[i]);
                combinationSum2(candidates, target - candidates[i], i + 1, current, result);
                current.pop_back();
            }
        }
    }
};
