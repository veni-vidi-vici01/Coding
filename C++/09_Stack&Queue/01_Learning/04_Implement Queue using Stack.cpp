-------------------------------------------------Method 1-------------------------------------------
class MyQueue {
private:
int length;
stack<int> s;
stack<int> v; 
public:
    MyQueue() {
        length =0;
    }
    
    void push(int x) {
        while(s.size()){
            v.push(s.top());
            s.pop();
        }
        s.push(x);
        while(v.size()){
            s.push(v.top());
            v.pop();
        }
        length++;
    }
    
    int pop() {
        length--;
        int temp=s.top();
        s.pop();
        return temp;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        if(length==0){
            return 1;
        }
        return 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
---------------------------------------Method 2------------------------------------------------
class MyQueue {
private:
int length;
stack<int> s;
stack<int> v;    
public:
    MyQueue() {
        length=0;
    }
    
    void push(int x) {
        s.push(x);
        length++;
    }
    
    int pop() {
        while(s.size()){
            v.push(s.top());
            s.pop();
        }
        int temp = v.top();
        v.pop();
        while(v.size()){
            s.push(v.top());
            v.pop();
        }
        length--;
        return temp;
    }
    
    int peek() {
        while(s.size()){
            v.push(s.top());
            s.pop();
        }
        int temp = v.top();
        while(v.size()){
            s.push(v.top());
            v.pop();
        }
        return temp;
    }
    
    bool empty() {
        if(length==0){
            return 1;
        }
        return 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
