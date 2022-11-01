class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxes, int truckSize) {
        // support variables
        int res = 0, currBatch;
        // sorting boxes by decreasing capacity
        sort(begin(boxes), end(boxes), [](auto &a, auto &b){return a[1] > b[1];});
		// carrying as many larger sized boxes as we can first
        for (auto &el: boxes) {
            currBatch = min(el[0], truckSize);
            truckSize -= currBatch;
            res += currBatch * el[1];
            if (!truckSize) break;
        }
        return res;
    }
};

