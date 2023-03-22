class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> map;
        for (string str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            map[key].push_back(str);
        }
        for (auto it = map.begin(); it != map.end(); it++) {
            result.push_back(it->second);
        }
        return result;
    }
};
