class Solution {
public:

int sol(vector<vector<int>> &temp,int s,int e,vector<int> &nums,int n){
    //if lower index is greater than higher index or s or e go out of range
    if(s>e || s<0 || e>=n){
        return 0;
    }
    //if the ans is already computed
    else if(temp[s][e]!=-1){
        return temp[s][e];
    }
    //if there is a single element in the range
    else if(s==e){
        temp[s][e]=nums[s];
        return temp[s][e];
    }
    else{
        //temporary variavle
        int rt=0;
        for(int i=s;i<=e;i++){
            //ans = current element + ans from leftside + ans from rightside
            rt=max(rt,nums[i]+sol(temp,s,i-2,nums,n)+sol(temp,i+2,e,nums,n));
        }
        //update th computed solution and return it
        temp[s][e]=rt;
        return rt;
    }
    return temp[s][e];
}


int rob(vector<int>& nums) {
    int n=nums.size();
     int ans=0;
    //temp vector stores solution for smaller sub cases
    vector<vector<int>> temp(n,vector<int>(n,-1));
   
    
    //Case 1  0th element is included
    ans=max(ans,nums[0]+sol(temp,2,n-2,nums,n));
    
    //Case 2 last element is included
    ans=max(ans,nums[n-1]+sol(temp,1,n-3,nums,n));
    
    //Case 3 both the elements are excluded
    ans=max(ans,sol(temp,1,n-2,nums,n));
  
    return ans;
}
};
