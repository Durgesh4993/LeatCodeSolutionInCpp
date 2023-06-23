class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node *temp=head;
        int n=0;
        int m=1;
        int p=0;
        while(temp!=NULL)
        {
            n=n*10+temp->data;
            p=p+temp->data*m;
            m=m*10;
            temp=temp->next;
        }
        if(n==p) return true;
        else return false;
    }


};
