 class Solution {
public:
    ListNode* mergeTwoLists(ListNode* firstList, ListNode* secondList) {

        if (firstList == nullptr) {
            return secondList;
        }

        if (secondList == nullptr) {
            return firstList;
        }

        if (firstList->val <= secondList->val) {
            firstList->next = mergeTwoLists(firstList->next, secondList);
            return firstList;
        }

        secondList->next = mergeTwoLists(firstList, secondList->next);
        return secondList;
    }
};