class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
    long long ans = 0; // initialize answer variable to 0
    int j = -1; // initialize starting index of current subarray to -1
    int prevMinKIndex = -1; // initialize most recent index of minK to -1
    int prevMaxKIndex = -1; // initialize most recent index of maxK to -1

    for (int i = 0; i < nums.size(); ++i) { // iterate over every element in nums
      if (nums[i] < minK || nums[i] > maxK)
        j = i; // if nums[i] is out of range, move starting index of current subarray to i
      if (nums[i] == minK)
        prevMinKIndex = i; // if nums[i] is minK, update most recent index of minK to i
      if (nums[i] == maxK)
        prevMaxKIndex = i; // if nums[i] is maxK, update most recent index of maxK to i

      // calculate number of valid subarrays that end at index i and add to answer
      ans += max(0, min(prevMinKIndex, prevMaxKIndex) - j);
    }

    return ans; // return the total count of valid subarrays
}
};
