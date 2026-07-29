 class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode dummy(0);

        while (head != nullptr) {
            ListNode* nextNode = head->next;

            head->next = dummy.next;
            dummy.next = head;

            head = nextNode;
        }

        return dummy.next;
    }
};