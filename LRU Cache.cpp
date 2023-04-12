class Node{
public:
    int key, val;
    Node *prev, *next;
    Node(int key,int val){
        this->key=key;
        this->val=val;
    }
};

class LRUCache {
public:
    int cap;
    Node* head=new Node(0,0);
    Node* tail=new Node(0,0);
    unordered_map<int,Node*> mp;
    
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    
    void Add(Node* newNode){
        mp[newNode->key]=newNode;
        Node* tmp=head->next;
        head->next=newNode;
        newNode->prev=head;
        newNode->next=tmp;
        tmp->prev=newNode;
    }
    void Delete(Node* node){
        mp.erase(node->key);
        node->prev->next=node->next;
        node->next->prev=node->prev;
    }
    int get(int key) {
        if(mp.find(key)!=mp.end()){ // key present
            Node* resNode=mp[key];
            Delete(resNode);
            Add(resNode);
            return resNode->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){ // key is present
            Delete(mp[key]);
        }
        if(mp.size()==cap){
            Delete(tail->prev);
        }
        Add(new Node(key,value));
    }
};
