class Solution {
public:
    ListNode* reverseDLL(ListNode* head) {

        ListNode* temp = NULL;

        // Traverse the entire doubly linked list
        while (head != NULL) {

            // Store the previous pointer
            temp = head->prev;

            // Swap prev and next pointers
            head->prev = head->next;
            head->next = temp;

            // Move to the next node (which is now in prev after swapping)
            head = head->prev;
        }

        // temp points to the previous node of the new head,
        // so return temp->prev as the new head
        return (temp != NULL) ? temp->prev : NULL;
    }
};