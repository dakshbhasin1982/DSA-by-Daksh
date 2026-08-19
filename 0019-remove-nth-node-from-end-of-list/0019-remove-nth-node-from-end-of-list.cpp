 class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode dummyNode(0);
        dummyNode.next = head;

        ListNode* leadPointer = &dummyNode;
        ListNode* trailPointer = &dummyNode;

        for (int step = 0; step < n; step++) {
            leadPointer = leadPointer->next;
        }

        while (leadPointer->next != nullptr) {
            leadPointer = leadPointer->next;
            trailPointer = trailPointer->next;
        }

        ListNode* nodeToDelete = trailPointer->next;
        trailPointer->next = trailPointer->next->next;

        return dummyNode.next;
    }
};