class Solution {
    public boolean isHappy(int n) {
      int slow=n;
      int fast=n;
        do{
            slow=findSquare(slow);
            fast=findSquare(findSquare(fast));
        }while(slow!=fast);
        
        if(slow==1){
            return true;
        }
        return false;
    }
    public int findSquare(int num){
        int n=0;
        while(num>0){
            int mod=num%10;
            n+=mod*mod;
            num/=10;
            }
        return n;
    }
}
