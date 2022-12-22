class Solution {

public:
   int climbStairs(int n) {
    if(n == 0||n==1)
        return n;
   int b = 1;
   int a = 2;    
   for(int i=3;i<=n;i++){
       a = a+b;
       b = a-b; 
   }
   return a; 
}
};
