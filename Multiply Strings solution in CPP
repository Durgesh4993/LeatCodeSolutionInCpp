class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = num1.size(), n2 = num2.size();
        string res(n1 + n2, '0');
        for (int i = n1 - 1; i >= 0; i--) {
            for (int j = n2 - 1; j >= 0; j--) {
                int sum = (res[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0');
                res[i + j + 1] = sum % 10 + '0';
                res[i + j] += sum / 10;
            }
        }
        size_t startpos = res.find_first_not_of("0");
        if (string::npos != startpos) {
            return res.substr(startpos);
        }
        return "0";
    }
};
