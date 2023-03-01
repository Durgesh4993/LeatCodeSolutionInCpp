class Solution {
public:
    string fractionToDecimal(int n, int d) {
     
        string ans = "";
       
        
        // Handling Negative Case
        if((n<0 && d>0) || (n>0 && d<0 ))
            ans+= '-';
        
        // To avoid Edge Cases Mentioned Below store Numerator and Denominator
        // in Long long datatype ans remainder as well
        
        long long a = abs(n);
        long long b = abs(d);
        
        // Calculation Integral Part Of Answer
        long long num = abs(a/b);
        
        // Storing that to our ans string
        ans += to_string(num);
        
        // Calculate Remainder
        long long rem = abs(a%b);
        
        
        // IF remainder is zero , there wont be decimal part so return ans
        if(rem == 0)
            return ans;
        
        ans.push_back('.');
        
        // Now We will calculate decimal part
        // we will store mapping of remainder with its appearing index 
        // ex : 1/10 => rem = 1 its index will be 0
        
        string dec = "";
        unordered_map<int, int> mp;
       
        
        while(rem)
        {
            // iF We come across any remainder which is present in mapping 
            // it means the recurring part start from that remainder and we will get its index 
            // and process the result
            if(mp.find(rem) != mp.end())
            {
                int index  = mp[rem];
                string recurring = dec.substr(index);
                dec.erase(index);
                dec += '(' + recurring + ')';
                break;
            }
            // If Remainder dont exist in map we will continue dividing and storing next remainder till it becomes zero
            else
            {
                mp[rem] = dec.size();
                dec += to_string(rem*10/b);
                rem = (rem*10)%b;
            }
        }
        
        ans += dec;
        return ans;
        
        
        // Pls Upvote If You Like It
    }
};

// Some Good Test Cases
// 4
// 333

// -1
// -2147483648

// 1
// 17

// 45
// 499

// -2147483648
// -1
