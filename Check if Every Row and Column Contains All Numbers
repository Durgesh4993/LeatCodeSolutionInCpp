class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        
        
        //approach 1 - create 2 matrixes of same size - one for row and other for column
        //approach 2 - create 4 hashmap -> 1 for row and n for column 
        
        int n = matrix.size(), i, j;
        unordered_set<int> row;
        vector<unordered_set<int>> cols(n);
        
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                int val = matrix[i][j];
                if(val>=1 && val<=n)
                {
                    if(row.find(val)!=row.end() || cols[j].find(val)!=cols[j].end())
                    
                    {
                        //means it's already in the hashmap
                        return false;
                    }
                    
                    else
                    {
                        row.insert(val);
                        cols[j].insert(val);
                    }
                }
                
                else
                    return false;
            }
            
            row.clear();
        }
        
        return true;
    }
};
