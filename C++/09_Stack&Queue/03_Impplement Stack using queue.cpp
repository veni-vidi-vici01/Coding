class MyStack {
private:
    int length;
    queue<int> q;
public:
    MyStack() {
        length=0;
    }
    
    void push(int x) {
       q.push(x);
       for(int i=0;i<length;i++){
        q.push(q.front());
        q.pop();
       } 
       length++;
    }
    
    int pop() {
        int temp=q.front();
        q.pop();
        length--;
        return temp;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        if(length==0){
            return 1;
        }
        return 0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
