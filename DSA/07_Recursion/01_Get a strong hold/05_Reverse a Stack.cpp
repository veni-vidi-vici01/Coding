---------------------------------------------------Optimal-----------------------------------------------------------
class Solution {
  public:
    void insertAtBottom(stack<int> &st , int val){
        if(st.empty()){
            st.push(val);
            return;
        }
        
        int insert = st.top();
        st.pop();
        
        insertAtBottom(st, val);
        
        st.push(insert);
    }
    
    void reverseStack(stack<int> &st) {
        int n = st.size();
        
        if(n < 1) return;
        
        int val = st.top();
        st.pop();
        
        reverseStack(st);
        
        insertAtBottom(st, val);
    }
};