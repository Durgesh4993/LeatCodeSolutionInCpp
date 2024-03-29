class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        
        while (n) {
            // let's and(&) each bit with 1, if the result is 1 then we increment count by 1
            if (n&1 > 0) count++;
            // and then shift n by 1 bit [so that we can check the next bit is 1 or not]
            n>>=1;
        }
        return count;
    }
};
