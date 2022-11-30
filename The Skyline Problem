class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int> > res; 
        if (buildings.empty())
            return res;        
        return buildSkyline(buildings, 0, buildings.size()-1);
    }
private:    
    vector<vector<int> > buildSkyline(vector<vector<int>>& buildings, int i, int j) {
        vector<vector<int> > res;
        if (i == j) {
            vector<int> x = {buildings[i][0], buildings[i][2]};
            res.push_back(x);
            vector<int> y = {buildings[i][1], 0}; 
            res.push_back(y);
            return res;
        }
        int mid = i + (j-i)/2;
        vector<vector<int> > res1 = buildSkyline(buildings, i, mid);
        vector<vector<int> > res2 = buildSkyline(buildings, mid+1, j);
        res = mergeSkyline(res1, res2);
        return res;
    }
    vector<vector<int> > mergeSkyline(vector<vector<int> >& sline1, vector<vector<int> >& sline2) {
        vector<vector<int> > res;
        int i1 = 0, i2 = 0; 
        int h1 = 0, h2 = 0, hmax = 0;
        while (i1 < sline1.size() && i2 < sline2.size()) {
            if (sline1[i1][0] < sline2[i2][0]) {
                int x1 = sline1[i1][0];
                h1 = sline1[i1][1];
                if (hmax < h1)    {                    
                    res.push_back(sline1[i1]);
                } 
                else if (max(h1, h2) < hmax) {
                    vector<int> x = {x1, max(h1,h2)};
                    res.push_back(x);
                }
                hmax = max(h1, h2);
                i1++;
            }
            else if (sline1[i1][0] > sline2[i2][0]) {
                int x2 = sline2[i2][0];
                h2 = sline2[i2][1];
                if (hmax < h2) {
                    res.push_back(sline2[i2]);                        
                }
                else if (max(h1,h2) < hmax) {
                    vector<int> x = {x2, max(h1,h2)};
                    res.push_back(x);
                }
                hmax = max(h1, h2);
                i2++;
            }
            else { 
                h1 = sline1[i1][1];
                h2 = sline2[i2][1];
                if (max(h1,h2) != hmax) { 
                   hmax = max(h1,h2);
                   vector<int> x = {sline1[i1][0], hmax}; 
                   res.push_back(x);
                }
                i1++;
                i2++;
            }                        
        }
        while (i1 < sline1.size()) {
            res.push_back(sline1[i1++]);
        }
        while (i2 < sline2.size()) {
            res.push_back(sline2[i2++]);
        }
        return res;
    }    
};
