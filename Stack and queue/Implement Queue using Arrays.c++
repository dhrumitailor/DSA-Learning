class ArrayQueue {
public:
vector<int>q;
    ArrayQueue() {
    }
    
    void push(int x) {
   q.push_back(x);
    }
    
    int pop() {
        int x = q.front();
        q.erase(q.begin());
        return x;
  
    }
    
    int peek() {
    return q.front();
    }
    
    bool isEmpty() {
  return q.empty();
    }
};