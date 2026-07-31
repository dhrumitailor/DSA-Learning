class Solution {
public:

    // Insert an element in its correct position
    void insert(stack<int> &st, int x) {

        // If stack is empty or top is greater than x
        if (st.empty() || st.top() <= x) {
            st.push(x);
            return;
        }

        // Remove top element
        int temp = st.top();
        st.pop();

        // Insert x recursively
        insert(st, x);

        // Put removed element back
        st.push(temp);
    }

    // Sort the stack
    void sortStack(stack<int> &st) {

        // Base case
        if (st.empty()) {
            return;
        }

        // Remove top element
        int x = st.top();
        st.pop();

        // Sort remaining stack
        sortStack(st);

        // Insert current element in sorted order
        insert(st, x);
    }
};
