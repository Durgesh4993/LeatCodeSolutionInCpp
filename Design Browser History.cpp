class BrowserHistory {
public:
    vector<string>v;
    int end, curr;
    BrowserHistory(string homepage) 
    {
        v.push_back(homepage);
        end = 0; curr = 0;
    }
    
    void visit(string url) 
    {
        if (curr == end)
        {
            if (end == v.size() - 1) { v.push_back(url); end++; } //push the new url, mark the end at end of array
            else v[++end] = url; //increment end and then add the url there 
            curr++;  //increment curr
        }
        else 
        {
            v[++curr] = url; //increment curr then add url there
            end = curr; //rest all url's next to curr need to be erased, so simply mark end = curr;
        }
    }
    
    string back(int steps) 
    {
        curr = max(0, curr - steps);
        return v[curr];
    }
    
    string forward(int steps)
    {
        curr = min(end, curr + steps);
        return v[curr];
    }
};
