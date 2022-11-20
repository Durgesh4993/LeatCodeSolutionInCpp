class Solution {
public:
    int countPrimes(int n) {
        vector<bool> visited(n,0);
        int count = 0;
        for(int i=2;i<n;i++){
            if(visited[i]==true) continue;
            count++;
        // make all multiple of current prine as visited
            for(int j = i+i;j<n;j += i) visited[j] = 1;
        }
        return count;
    }
};
