class Solution {
public:
    string prefixToPostfix(const string& s) {
        // Create a stack to hold intermediate postfix expressions
        stack<string> st;
        // Traverse the prefix expression from right to left
        for(int i = s.size() - 1; i >= 0; i--) {
            char c = s[i];
            // If the current character is an operand, push it to the stack
            if(isalnum(c)) {
                st.push(string(1, c));
            }
            // Otherwise, the character is an operator
            else {
                // Pop the first operand from the stack
                string op1 = st.top(); st.pop();
                // Pop the second operand from the stack
                string op2 = st.top(); st.pop();
                // Form a new postfix expression by placing the operator after the operands
                st.push(op1 + op2 + c);
            }
        }
        // Return the final postfix expression stored on the top of the stack
        return st.top();
    }
};