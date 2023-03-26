class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        int vis[n],hsh[n],ans=-1,pathvis[n];
        for(int i = 0; i < n; i++)
            hsh[i]=vis[i]=pathvis[i]=0;
        for(int k = 0;k<n;k++)
        {
            if(!vis[k])
            {
                int ct = 1,j=-1,i=k;
                while(edges[i]!=-1 && !vis[i])
                {
                    pathvis[i]=k+1;
                    hsh[i]=ct;
                    ++ct;
                    vis[i]=1;
                    j=i;
                    i=edges[i];
                }
                if(edges[i]!=-1)
                {
                    if(pathvis[i]==pathvis[j])
                    {
                        int y = abs(hsh[j]-hsh[i])+1;
                        ans=max(ans,y);
                    }
                }
            }
        }
        return ans;
    }
};
