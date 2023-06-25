class Solution {
public:
    string removeTrailingZeros(string num) {
        int j = num.length()-1;
        while(j >= 0 && num[j]=='0')j--;
        if(j<0)return "";
        return num.substr(0,j+1);
    }
};
