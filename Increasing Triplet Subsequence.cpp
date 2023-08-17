class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();    //size of the array
        
        if(n < 3)    
            return false;
        
        //we initilize two integer with INT_MAX value.
        int left = INT_MAX;
        int mid = INT_MAX;
        
        // traverse the whole array.
        for(int i = 0; i < n ; i ++)
        {
           
            if(nums[i] > mid)
                return true;
            
      
            else if(nums[i] > left && nums[i] < mid)
                mid = nums[i];
            
            else if(nums[i] < left)
                left = nums[i];
        }
        return false;
    }
};
