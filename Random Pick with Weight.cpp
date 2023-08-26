class Solution
{
public:
    vector<int> w;
    Solution(vector<int> &w)
    {
        for (int i = 1; i < w.size(); i++)
        {
            w[i] = w[i] + w[i - 1];
        }
        this->w = w;
    }
    int pickIndex()
    {
        int hi = w.back();
        int index = rand() % hi;
        index++;
        int lower = lower_bound(w.begin(), w.end(), index) - w.begin();
        return lower;
    }
};
