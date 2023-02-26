class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> m;
        for(int i=0; i<s.size(); i++) m[s.substr(i, 10)]++;
    
        vector<string> ans;
        for(auto i : m) {
            if(i.second > 1) ans.push_back(i.first);
        }
        return ans;
    }
};
