class ArrayStack {
public:

vector<int>st;

    ArrayStack() {
    }
    
    void push(int x) {
   st.push_back(x);
    }
    
    int pop() {
        int x = st.back();
        st.pop_back();
        return x;
  
    }
    
    int top() {
    return st.back();
    }
    
    bool isEmpty() {
  return st.empty();
    }
};