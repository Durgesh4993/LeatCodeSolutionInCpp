class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0, j = nums.size()-1;
        if(j==0)return nums[0];
        int n = j+1,mid;
        while(i<=j){
            mid = (j-i)/2+i;
            if(nums[mid]<nums[(mid-1+n)%n] && nums[mid]<nums[(mid+1)%n]){
                return nums[mid];
            }else if(nums[i]<nums[mid]){
                if(nums[i]>nums[j]){
                    i = (mid+1)%n;
                }else{
                    j = (mid-1+n)%n;
                }
            }else{
                if(nums[mid]>nums[j]){
                    i = (mid+1)%n;
                }else{
                    j = (mid-1+n)%n;
                }
            }
        }
        return -1;
    }
};
