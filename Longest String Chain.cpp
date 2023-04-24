class Solution {
public:
    bool f(string &s1,string &s2){
        if(s1.size()!=s2.size()+1)return false;
        int i=0,j=0;
        while(i<s1.size()){
            if( j<s2.size() && s1[i]==s2[j])
            {
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        if(i==s1.size() && j==s2.size()) return true;
        return false;
    }
    static bool cmp(string &s1,string &s2){
        return s1.size()<s2.size();
    }
    
    int longestStrChain(vector<string>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end(),cmp);
        vector<int>dp(n,1);
        int maxi=1;
        // sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            for(int prev=0;prev<i;prev++){
                if(f(arr[i],arr[prev]) && 1+dp[prev]>dp[i]){
                    dp[i]=1+dp[prev];
                }
            }
            if(dp[i]>maxi){
                maxi=dp[i];
            }
        }
        return maxi;
    }
    
};
