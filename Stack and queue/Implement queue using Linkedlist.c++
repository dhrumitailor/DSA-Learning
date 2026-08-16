class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


class LinkedListQueue {
public:

Node* front;
Node* rear;

    LinkedListQueue() {
        front = NULL;
        rear = NULL;

    }
    
    void push(int x) {
        Node* newNode = new Node(x);

        if(front == NULL){
            front = newNode;
            rear = newNode;
        }
        else{
            rear->next = newNode;
            rear= newNode;
        }
   
    }
    
    int pop() {
  
int x = front->data;
front = front->next;

if(front == NULL){
    rear = NULL;
}

return x;
    }
    
    int peek() {
    return front->data;
    }
    
    bool isEmpty() {
        return front==NULL;
  
    }
};