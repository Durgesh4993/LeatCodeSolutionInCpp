class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candies = *max_element(candies.begin(), candies.end());
        for (int i = 0; i < candies.size(); i++) {
            candies[i] = candies[i] + extraCandies >= max_candies;
        }
        vector<bool> result(candies.size());
        transform(candies.begin(), candies.end(), result.begin(), [](int i) { return i == 1; });
        return result;
    }
};
