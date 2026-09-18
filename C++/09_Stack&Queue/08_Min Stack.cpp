class MinStack {
private:
        stack<int> st;
        stack<int> min;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.size()==0){
            min.push(value);
        }else if(value<=min.top()){
            min.push(value);
        }
        st.push(value);
    }
    
    void pop() {
        if(min.top()==st.top()){
            min.pop();
        }
        st.pop();
    }
    
    int top() {
       int temp= st.top();
       return temp;
    }
    
    int getMin() {
        int temp=min.top();
        return temp;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
