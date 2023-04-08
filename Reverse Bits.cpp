class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0,count=32;
        //ans<<=1;
        //n>>=1;
        while(count){
            ans+=n&1;
            count--;
            n>>=1;
            if(count) ans<<=1;
        }
        return ans;
    }
};
