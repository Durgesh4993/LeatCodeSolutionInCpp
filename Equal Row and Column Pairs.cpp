class Solution {
public:
    string mapping(vector<int> & row){

        string ans="";

        for(int j:row)
            ans+=to_string(j)+"#";
        
        return ans;
    }

    int equalPairs(vector<vector<int>>& grid) {

        int count=0;
        int n=grid.size();
        unordered_map<string,int> mp;

        // mapping the rows with the help of mapping function to create keys
        for(int i=0; i<n;i++)
            mp[mapping(grid[i])]++;
        

        for(int i=0; i<n;i++){

            string ans="";

            //Traversing the matrix column wise and generating new key 
            for(int j=0; j<n;j++)
                ans+=to_string(grid[j][i])+"#";

            // adding the number of occurences of the key generated 
            count+=mp[ans];
        }

        return count;
    }
};
