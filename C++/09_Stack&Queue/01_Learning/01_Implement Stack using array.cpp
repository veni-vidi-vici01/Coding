class myStack {
private:
    int top;                      //I was not able to use int n, int array, and int top in functions(isEmpty, push and pop).
    int capacity;
    int *arr;
public:
    myStack(int n) {
        capacity = n;
        top = -1;
        arr = new int[n];         //for defining the size of the array which is defined in the private.
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    void push(int x) {
        if (!isFull()) {
            arr[++top] = x;
        }
    }

    void pop() {
        if (!isEmpty()) {
            top--;
        }
    }

    int peek() {
        if (!isEmpty()) {
            return arr[top];
        }
        return -1;
    }
};
//*Implementation of array requires a fix size of the stack defined because array is static.
