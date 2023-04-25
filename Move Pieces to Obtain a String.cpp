class Solution {
public:
    bool canChange(string s, string t) {
        queue<pair<char, int>> ss, ts;
        
        // Fill queue with start
        for(int i=0; i<s.size(); i++){
            if(s[i] != '_')ss.push({s[i], i});        
        }
        
        // Fill queue with target
        for(int i=0; i<t.size(); i++){
            if(t[i] != '_')ts.push({t[i], i});
        }

        if(ss.size() != ts.size())return false;
        
        while(ss.size()){
            pair<char, int> sp, tp;
            
            sp = ss.front();
            tp = ts.front();
            
            ss.pop();
            ts.pop();
            
//             If both the letters don;t match return false, or check for the index to move Left and Right
            if(sp.first != tp.first) return false;
            if(sp.first == 'L' && tp.second>sp.second){
                return false;
            } else if(sp.first == 'R' && tp.second<sp.second){
                return false;
            }
        }
        
        return true;
    }
};
