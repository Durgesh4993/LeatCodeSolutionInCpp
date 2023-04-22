class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> res;
        for(int i=1;i<n;i++){
            string a = to_string(i), b=to_string(n-i);
            if(a.find('0') != std::string::npos || b.find('0') != std::string::npos){
                continue;
            }
            res.push_back(i);res.push_back(n-i);
            break;
        }
        return res;
    }
};
