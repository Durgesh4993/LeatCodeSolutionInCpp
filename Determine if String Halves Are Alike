class Solution {
public:
    bool halvesAreAlike(string s) 
    {
        // using 2 pointer for checking two half (onr from starting and one from last)
        int l = 0;
        int r = s.length()-1;
        
        
        int cnt_A = 0;
        int cnt_B = 0;
        
        while(l<r)
        {
            // first half
            if(s[l]=='a' || s[l]=='e' || s[l]=='i' || s[l]=='o' || s[l]=='u' || s[l]=='A' || s[l]=='E' || s[l]=='I' || s[l]=='O' || s[l]=='U')
            {
                cnt_A++;
            }
            
            // second half
            if(s[r]=='a' || s[r]=='e' || s[r]=='i' || s[r]=='o' || s[r]=='u' || s[r]=='A' || s[r]=='E' || s[r]=='I' || s[r]=='O' || s[r]=='U')
            {
                cnt_B++;
            }
            
            // shrinking the string
            l++;
            r--;
        }
        
        return cnt_A == cnt_B;
    }
};
