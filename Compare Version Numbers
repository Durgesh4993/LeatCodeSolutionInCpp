class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> v1, v2;
        long long ans = 0;
        for(int i=0;i<version1.size();i++){
            if(version1[i]=='.'){
                v1.push_back(ans);
                ans = 0;
            }
            else{
                ans = ans*10 + (version1[i]-'0');
            }
        }
        v1.push_back(ans);
        ans = 0;
        for(int i=0;i<version2.size();i++){
            if(version2[i]=='.'){
                v2.push_back(ans);
                ans = 0;
            }
            else{
                ans = ans*10 + (version2[i]-'0');
            }
        }
        v2.push_back(ans);
        
        if(v1.size()<v2.size()){
            while(v1.size()!=v2.size()) v1.push_back(0);
        }
        else{
            while(v1.size()!=v2.size()) v2.push_back(0);
        }
        
        for(int i=0;i<v1.size();i++){
            if(v1[i]<v2[i]) return -1;
            if(v1[i]>v2[i]) return 1;
        }
        return 0;
    }
};
