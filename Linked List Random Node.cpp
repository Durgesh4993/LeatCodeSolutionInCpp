
#include <cstdlib>
#include <ctime>

class Solution {
private:
    ListNode* head;
public:
    Solution(ListNode* head) {
        this->head = head;
    }

    int getRandom() {
        int count = 0;
        int result = 0;
        ListNode* current = head;
        while (current) {
            count++;
            // Randomly choose a node to be the result with probability 1/count
            if (rand() % count == 0) {
                result = current->val;
            }
            current = current->next;
        }
        return result;
    }
};
