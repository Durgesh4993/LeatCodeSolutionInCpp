class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;
        ListNode* prevPtr = nullptr;

        // Reverse the first half of the linked list
        while (fastPtr != nullptr && fastPtr->next != nullptr) {
            fastPtr = fastPtr->next->next;
            ListNode* nextNode = slowPtr->next;
            slowPtr->next = prevPtr;
            prevPtr = slowPtr;
            slowPtr = nextNode;
        }

        // Adjust pointers if the length of the linked list is odd
        if (fastPtr != nullptr) {
            slowPtr = slowPtr->next;
        }

        int maxSum = std::numeric_limits<int>::min();
        while (slowPtr != nullptr) {
            maxSum = std::max(maxSum, slowPtr->val + prevPtr->val);
            slowPtr = slowPtr->next;
            prevPtr = prevPtr->next;
        }
        return maxSum;
    }
};
