class Solution {
public:
     bool canFormByDeleting(string word, string str) {
        int word_i = 0, str_i = 0;
        
        while (word_i < word.size() && str_i < str.size()) {
            
            if (word[word_i] == str[str_i])
                word_i++; 
            
            str_i++;
        }
        
        return word_i == word.size();
    }
    
    string findLongestWord(string s, vector<string>& d) {
        string res = "";
        
        for (auto str : d) {
            
            if (canFormByDeleting(str, s)) {
                
                if (str.size() > res.size() || (str.size() == res.size() && str < res))
                    res = str;
            }
        }
        
        return res;
    }
};
