class Solution {
public:
    // Convert prefix to infix
    string prefixToInfix(string s) {
        // Stack to hold partial expressions
        stack<string> st;
        // Traverse prefix expression from right to left
        for(int i = s.size() - 1; i >= 0; i--) {
            char c = s[i];
            // If character is operand
            if(isalnum(c)) {
                st.push(string(1, c));
            }
            // Otherwise it is operator
            else {
                // Pop first operand from stack
                string op1 = st.top(); st.pop();
                // Pop second operand from stack
                string op2 = st.top(); st.pop();
                // Form new parenthesized expression
                string exp = "(" + op1 + c + op2 + ")";
                st.push(exp);
            }
        }
        // Return the final infix expression
        return st.top();
    }
};