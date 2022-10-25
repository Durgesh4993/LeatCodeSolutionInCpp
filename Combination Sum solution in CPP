class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        sort(candidates.begin(), candidates.end());
        combinationSum(candidates, target, 0, current, result);
        return result;
    }
private:
    void combinationSum(vector<int>& candidates, int target, int j, vector<int>& current, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        for (int i = j; i < candidates.size() && target >= candidates[i]; i++) {
            current.push_back(candidates[i]);
            combinationSum(candidates, target - candidates[i], i, current, result);
            current.pop_back();
        }
    }
};
