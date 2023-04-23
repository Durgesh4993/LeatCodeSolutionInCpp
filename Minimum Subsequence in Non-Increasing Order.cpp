class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (auto n : nums){
            sum += n;
        }
        sort(nums.begin(), nums.end(), [&](auto a,auto b){
            return a>b ;
        });
        vector<int> ans;
        int partial = 0;
        for(auto n: nums) {
            partial += n;
            ans.push_back(n);
            if (partial > sum - partial){
                break;
            }
        }
        return ans;
    }
};
