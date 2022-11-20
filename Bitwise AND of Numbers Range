class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if (right == left) return right;
        int offset = log2(right - left) + 1;
        return ~(((uint32_t)1<<offset)-1) & right & left;
    }
};
