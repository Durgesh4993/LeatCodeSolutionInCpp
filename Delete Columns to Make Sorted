class Solution {
public:
    int minDeletionSize(vector<string>& strs)
    {

        int cnt = 0;
        for (int i = 0; i < strs[0].size(); i++) {
            bool flag = true;
            for (int j = 0; j < strs.size() - 1; j++) {
                if (strs[j][i] > strs[j + 1][i]) {
                    flag = false;
                    break;
                }
            }

            if (flag == false) {
                cnt++;
            }
        }

        return cnt;
    }
};
