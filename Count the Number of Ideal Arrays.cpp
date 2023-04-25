class Solution {
public:
    long long dp[15][10001],pr[15][10001],tot[15],mod=1e9+7,mx,n;
    void get(int la,int cn){
        tot[cn]++;
        for(int p=2*la;p<=mx;p+=la)get(p,cn+1);
    }
    int idealArrays(int nn, int mmx) {
        n=nn;mx=mmx;
        for(int i=1;i<=10000;i++)
            dp[1][i]=1,pr[1][i]=i;
        
        for(int i=2;i<15;i++){
            for(int j=i;j<=10000;j++){
                dp[i][j]=pr[i-1][j-1];
                pr[i][j]=dp[i][j]+pr[i][j-1];
                dp[i][j]%=mod,pr[i][j]%=mod;
            }
        }
        long long ans=mx,x;
        for(int i=1;i<=mx;i++)
            get(i,1);
            
        for(int i=2;i<15;i++){
            x=tot[i]*dp[i][n];
            x%=mod;
            ans+=x;
            ans%=mod;
        }
        return ans;
    }
};
