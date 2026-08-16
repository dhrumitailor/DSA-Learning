class Node {
public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = NULL;
    }
};



class LinkedListStack {
public:


Node* head;
    LinkedListStack() {
head = NULL;
    }
    
    void push(int x) {
   Node* newNode = new Node(x);
   newNode->next = head;
   head = newNode;
    }
    
    int pop() {
  int x = head->val;
  head = head->next;
  return x;
    }
    
    int top() {
        return head->val;
    
    }
    
    bool isEmpty() {
  return head== NULL;
    }
};