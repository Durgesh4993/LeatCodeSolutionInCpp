class Solution {
public:
    int minFlips(int &a, int &b, int &c) {
        int x = 0;
        while(a || b || c){
            if(c&1){
                if(!(a&1) && !(b & 1)){
                    x++;
                }
            }else{
                if((a&1) && (b & 1)){
                    x+=2;
                }else if((a&1) || (b & 1))x += 1;
            }
            a >>=1;b >>= 1;c >>=1;
        }
        return x;
    }
};
