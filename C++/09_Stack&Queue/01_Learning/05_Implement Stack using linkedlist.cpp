// class Node {
//   public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = nullptr;
//     }
// };

class myStack {
  private:
  int length;
  Node* top;
  public:
    myStack() {
     length=0;
     top=nullptr;
    }

    bool isEmpty() {
        return top==nullptr;
    }

    void push(int x) {
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;
        length++;
    }

    void pop() {
        if (top == nullptr) return; // Empty stack check

        Node* temp = top;
        top = top->next;
        delete temp;
        length--;
    }

    int peek() {
        if (top == nullptr) return -1;
        return top->data;
    }

    int size() {
        return length;
    }
};
