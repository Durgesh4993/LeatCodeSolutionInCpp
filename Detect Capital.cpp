class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        int c1=0,c2=0;
        if(word[0]>=65 && word[0]<=90)
        {
            c2++;
        }
        for(int i=0;i<n;i++){
            if(word[i]>=65 && word[i]<=90)
            {
                c1++;
            }

        }
        if(c1==n)
        {
            return true;
        }
        else if(c1==0)
        {
            return true;
        }
        else if(c1==1 && c2==1)
        {
            return true;
        }
        else{
            return false;
        }
        
    }
};
