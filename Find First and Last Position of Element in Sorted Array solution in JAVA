class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] result = new int[2];
        result[0] = -1;
        result[1] = -1;
        if (nums.length == 0) {
            return result;
        }
        int left = 0;
        int right = nums.length - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target) {
                int i = mid;
                while (i >= 0 && nums[i] == target) {
                    i--;
                }
                result[0] = i + 1;
                i = mid;
                while (i < nums.length && nums[i] == target) {
                    i++;
                }
                result[1] = i - 1;
                return result;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return result;
    }
}
