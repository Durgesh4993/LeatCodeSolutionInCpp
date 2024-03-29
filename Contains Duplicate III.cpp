class Solution {
public:
bool containsNearbyAlmostDuplicate(vector<int>& nums, int a, int b) {
    vector<pair<int ,int> >ans;
    for(int i=0;i<nums.size();i++)
    {
        ans.push_back(make_pair(nums[i],i));
    }
    sort(ans.begin(),ans.end());
    
    
   for(int i = 0; i < ans.size(); i++){
        for(int j = i+1; j < ans.size(); j++){
            if(abs(ans[i].first - ans[j].first) <= b){
                if(abs(ans[i].second - ans[j].second) <= a)
                    return true; 
            } 
            else
            {
                break;
            }
        }
    }
    return false;
}
};
