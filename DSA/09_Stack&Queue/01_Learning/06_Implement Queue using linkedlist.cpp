class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class myQueue {
  private:
  int length;
  Node* end;
  Node* start;

  public:
    myQueue() {
        length =0;
        start=nullptr;
        end=nullptr;
    }

    bool isEmpty() {
        return start==nullptr;
    }

    void enqueue(int x) {
        Node*temp=new Node(x);
        if(!isEmpty()){
        end->next=temp;
        end=end->next;
        }else{
            start=temp;
            end=temp;
        }
        length++;
    }

    void dequeue() {
        Node*temp=start;
        if(length!=1){
            start=start->next;
            delete(temp);
        }else{
            start=nullptr;
            end=nullptr;
        }
        length--;
    }

    int getFront() {
        if(isEmpty()){
            return -1;
        }else{
            return start->data;
        }
    }

    int size() {
        return length;
    }
};
