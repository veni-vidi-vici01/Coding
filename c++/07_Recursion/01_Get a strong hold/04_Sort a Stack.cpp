-------------------------------------------------------------Brute------------------------------------------------
class Solution {
  public:
    void sortStack(stack<int> &st) {
        stack<int> v1;
        vector<int> v2;
        v1=st;
        sort(v1,v2);
        for(int i=0;i<v2.size();i++){
            v1.push(v2[i]);
        }
        st.swap(v1);
    }
    vector<int> sort(stack<int> &st,vector<int> &v) {
        if(st.size()==0){
            return v;
        }
       int top =st.top();
       int temp=v.size();
       for(int i=0;i<v.size();i++){
           if(top<v[i]){
               temp=i;
               break;
           }
       }
       st.pop();
       v.insert(v.begin()+temp,top);
       return sort(st,v);
    }
};
-----------------------------------------------------Better-------------------------------------------------------
class Solution {
  public:
    void sortStack(stack<int> &st) {
        stack<int> s1;
        stack<int> s2;

        // Pass empty s2, populated st, and empty s1 into sort()
        st = sort(st, s1, s2);
    }

    stack<int> sort(stack<int> &st, stack<int> &s1, stack<int> &s2) {
        // Base case: stop when all elements are transferred to s2
        if (st.empty()) {
            return s2;
        }

        stack<int> v = st;
        stack<int> v1 = s1;
        int temp = INT_MAX;
        int temp1 = -1;

        // 1. Store initial size so v.pop() doesn't truncate the loop early
        int v_size = v.size();
        for (int i = 0; i < v_size; i++) {
            int val = v.top(); 
            v.pop();           
            v1.push(val);
            if (temp > val) {
                temp = val;
                temp1 = i; // track index of minimum element
            }
        }

        // 2. Pre-calculate pop count so v1.size() shrinking doesn't break the loop boundary
        int target_pops = v1.size() - temp1;
        for (int i = 0; i < target_pops - 1; i++) {
            v1.pop();
        }

        // 3. Push the target element into s2
        s2.push(v1.top()); 

        // 4. Remove the selected minimum element from st to prevent infinite recursion
        // Rebuild st without the element at index temp1
        stack<int> temp_st;
        int current_size = st.size();
        for (int i = 0; i < current_size; i++) {
            int val = st.top();
            st.pop();
            if (i != temp1) {
                temp_st.push(val);
            }
        }
        // Restore remaining elements back into st
        while (!temp_st.empty()) {
            st.push(temp_st.top());
            temp_st.pop();
        }
        return sort(st, s1, s2);
    }
};
----------------------------------------------optimal-----------------------------------------------------
class Solution {
  public:
    void insertSorted(stack<int> &st, int val){
        if(st.empty() || val >= st.top()){
            st.push(val);
            return;
        }        

        int currVal = st.top();
        st.pop();

        insertSorted(st, val);

        st.push(currVal);
    }
    void sortStack(stack<int> &st) {
        int n = st.size();
        stack<int> temp;

        if(n <= 1) return;

        int val = st.top();
        st.pop();

        sortStack(st);

        insertSorted(st , val);
    }
};