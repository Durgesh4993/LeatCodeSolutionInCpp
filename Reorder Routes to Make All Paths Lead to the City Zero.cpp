class Solution {
private:
    int res = 0;
    set<pair<int, int>> roads;
    map<int, vector<int>> graph;

public:
    int minReorder(int n, vector<vector<int>>& connections) {
        for (vector<int> connection : connections) {
            int u = connection[0];
            int v = connection[1];
            roads.insert(make_pair(u, v));
            graph[v].push_back(u);
            graph[u].push_back(v);
        }

        dfs(0, -1);

        return res;
    }

    void dfs(int u, int parent) {
        if (parent != -1 && roads.count(make_pair(parent, u))) {
            res++;
        }

        for (int v : graph[u]) {
            if (v == parent) {
                continue;
            }
            dfs(v, u);
        }
    }
};
