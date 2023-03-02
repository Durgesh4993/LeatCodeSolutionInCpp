class Solution {
public:
    ListNode* reverseList(ListNode* curr) {
        ListNode *prev = nullptr, *next = curr;
        while(curr) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a = reverseList(l1);
        ListNode* b = reverseList(l2);

        ListNode *answer = nullptr, *curr = nullptr;

        int carry = 0;
        while(a && b) {
            int val = a->val + b->val + carry;
            carry = val / 10;
            val = val % 10;
            ListNode* newNode = new ListNode(val);

            if(!answer) {
                answer = newNode;
                curr = newNode;
            }else {
                curr -> next = newNode;
                curr = newNode;
            }
            a = a->next;
            b = b->next;
        }

        while(a) {
            int val = a->val + carry;
            carry = val / 10;
            val = val % 10;
            ListNode* newNode = new ListNode(val);
            curr -> next = newNode;
            curr = newNode;
            a = a -> next;
        }

        while(b) {
            int val = b->val + carry;
            carry = val / 10;
            val = val % 10;
            ListNode* newNode = new ListNode(val);
            curr -> next = newNode;
            curr = newNode;
            b = b -> next;
        }

        if(carry) curr -> next = new ListNode(carry);

        return reverseList(answer);
    }
};
