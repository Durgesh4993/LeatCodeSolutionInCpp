class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string ans="";
        vector<char>vec;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='*')
            st.emplace(s[i]);
            else
            st.pop();
        }
        while(!st.empty())
        {
            vec.emplace_back(st.top());
            st.pop();
        }
        reverse(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++)
        {
            ans+=vec[i];
        }
        return ans;
    }
};
