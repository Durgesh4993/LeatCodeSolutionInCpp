class MyQueue {
public:
    /* data structure = Linked List */
    struct queueType
    {
        int val;
        queueType *next;
    };
    queueType *myQueue = NULL, *head = NULL; /* Queue Name = myQueue */
    
    /* Push element x onto myQueue */
    void push(int x) {
        if(myQueue == NULL)
        {
            head = new queueType();
            head->val = x;
            head->next = NULL;
            myQueue = head;;
        }
        else
        {
            queueType *pik;
            pik = new queueType();
            pik->val = x;
            pik->next = NULL;
            myQueue->next = pik;
            myQueue = myQueue->next;
        }
    }
    
    /** Removes the element on front of the myQueue and returns that element. */
    int pop() {
        queueType *pik = head;
        head = head->next;
        int ret = pik->val;
        delete(pik);
        myQueue = head == NULL ? NULL : myQueue;
        return ret;
    }
    
    /* Get the front element. */
    int peek() { return head->val; }
    
    /* Returns whether the stack is empty. */
    bool empty() { return head == NULL; }
};
