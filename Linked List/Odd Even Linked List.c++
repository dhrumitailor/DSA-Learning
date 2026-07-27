class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        // If list has 0 or 1 node, no rearrangement is needed
        if (head == NULL || head->next == NULL) {
            return head;
        }

        // odd points to first node
        ListNode* odd = head;

        // even points to second node
        ListNode* even = head->next;

        // Save the head of even list to attach later
        ListNode* evenHead = even;

        // Traverse until even or next even becomes NULL
        while (even != NULL && even->next != NULL) {

            // Connect current odd node to the next odd node
            odd->next = even->next;

            // Move odd pointer forward
            odd = odd->next;

            // Connect current even node to the next even node
            even->next = odd->next;

            // Move even pointer forward
            even = even->next;
        }

        // Attach the even list after the odd list
        odd->next = evenHead;

        // Return the modified list
        return head;
    }
};