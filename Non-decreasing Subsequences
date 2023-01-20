class Solution {
public:
    // Recursive function to find all increasing subsequences
    void solve(vector<int> nums, int index, vector<int> output, set<vector<int>>& ans){
        // Base case: if we have reached the end of the input array
        if(index>=nums.size()){
            // Only insert into ans if output has more than one element
            if(output.size()>1)
                ans.insert(output);
            return ;
        }
        // If output is empty or current element is greater than or equal to the last element in output
        if(output.size()==0 || nums[index] >= output.back()){
            output.push_back(nums[index]);
            solve(nums, index+1, output, ans);
            output.pop_back();
        }
        solve(nums, index+1, output, ans);
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        // Initialize output and set to store all increasing subsequences
        vector<int> output;
        set<vector<int>> ans;
        // Call recursive function to find all increasing subsequences
        solve(nums, 0, output, ans);
        // Return ans as a vector
        return vector(ans.begin(), ans.end());
    }
};
