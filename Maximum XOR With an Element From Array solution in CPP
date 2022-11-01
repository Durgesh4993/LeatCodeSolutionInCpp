class Node{
public:
    Node* links[2];
    int mini[2];
    
    Node(){
        links[0]=NULL,links[1]=NULL;
        mini[0]=INT_MAX,mini[1]=INT_MAX;
    }
    bool containsKey(int i){
        return links[i]!=NULL;
    }
    void put(int i, Node* node){
        links[i]=node;
    }
    Node* get(int i){
        return links[i];
    }
    void putMin(int bit, int x){
        mini[bit]=min(mini[bit],x);
    }
    int getMin(int bit){
        return mini[bit];
    }
};
class Solution {
public:
    Node* root;
    void insert(int x)
    {
        Node* curr=root;
        int k=32;
        while(k--)
        {
            int bit=((x>>k)&1);
            if(!curr->containsKey(bit))
                curr->put(bit,new Node());
            curr->putMin(bit,x);
            curr=curr->get(bit);
        }
    }
    int searchMaxXOR(int x, int m)
    {
        Node* curr=root;
        int ans=0,k=32;
        while(k--)
        {
            ans=ans*2;
            
            int bit=((x>>k)&1);
            if(curr->containsKey(1-bit) && curr->getMin(1-bit)<=m)
            {
                curr=curr->get(1-bit);
                ans++;
            }
            else
                curr=curr->get(bit);
        }
        return ans;
    }
    vector<int> maximizeXor(vector<int>& v, vector<vector<int>>& q) {
        int n=v.size();
        root=new Node();
        for(int i=0;i<n;i++)
            insert(v[i]);
        int minEle=*min_element(v.begin(),v.end());
        vector<int> ans;
        for(int i=0;i<q.size();i++)
        {
            int x=q[i][0],m=q[i][1];
            if(minEle<=m)
                ans.push_back(searchMaxXOR(x,m));
            else
                ans.push_back(-1);
        }
        return ans;
    }
};
