class Solution {
public:
    void combination(vector<int> &v,vector<vector<int>> &ans,vector<int> &ds,int k,int n,int i){
        if(ds.size()==k){
            if(n==0){
                ans.push_back(ds);
                return;
            }
        }
        if(i==v.size()){
            return;
        }  
        if(ds.size()<k){
        if(v[i]<=n){
        ds.push_back(v[i]);
        combination(v,ans,ds,k,n-v[i],i+1);
        ds.pop_back();
        combination(v,ans,ds,k,n,i+1);
            }
    }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v = {1,2,3,4,5,6,7,8,9};
        vector<vector<int>>ans;
        vector<int> ds;
        combination(v,ans,ds,k,n,0);
        return ans;
    }
};
