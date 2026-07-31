class Solution {
public:

    // Insert an element at the bottom of the stack
    void insertAtBottom(stack<int> &st, int x) {

        // If stack is empty, push the element
        if (st.empty()) {
            st.push(x);
            return;
        }

        // Remove the top element
        int temp = st.top();
        st.pop();

        // Insert x at the bottom
        insertAtBottom(st, x);

        // Put the removed element back
        st.push(temp);
    }

    // Reverse the stack
    void reverseStack(stack<int> &st) {

        // Base case
        if (st.empty()) {
            return;
        }

        // Remove the top element
        int x = st.top();
        st.pop();

        // Reverse the remaining stack
        reverseStack(st);

        // Put the removed element at the bottom
        insertAtBottom(st, x);
    }
};
