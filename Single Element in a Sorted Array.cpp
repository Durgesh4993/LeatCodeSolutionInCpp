
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

      unordered_map<int,int>mpp;
      for(auto i:nums) mpp[i]++;
      
      for(auto it:mpp)
        if(it.second==1) return it.first;
        
      return -1;
    }
};
