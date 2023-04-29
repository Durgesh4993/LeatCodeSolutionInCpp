class Solution {
public:
    int totalMoney(int n) {
        int i,j,k,a,b,x=1,y=7,sum=0;
        a=n/7;
        b=n%7;
        for(i=1;i<=a;i++)
        {
            for(j=x;j<=y;j++)
            {
                sum+=j;
            }
            x++;
            y++;
        }
        for(k=1;k<=b;k++)
        {
            sum+=x;
            x++;
        }
        return sum;
    }
};
