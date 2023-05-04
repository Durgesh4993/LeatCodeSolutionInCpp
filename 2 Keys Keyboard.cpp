class Solution {
public:
    int solve(int i, int n, int paste){
        if(i==n) return 0;
        if(i>n) return 1e8;

        return 1+min(1+solve(2*i,n,i),solve(i+paste,n,paste));
    }
    int minSteps(int n) {
        if(n==1)return 0;
        return solve(1,n,1)+1;
    }
};
