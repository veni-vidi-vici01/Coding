class Solution {
public:
    // Convert a valid postfix expression to a fully parenthesized infix expression
    string postToInfix(string postExp) {
        // Create a stack of strings to hold partial infix expressions
        stack<string> st;
        // Iterate over every character in the postfix string
        for (char ch : postExp) {
            // If the character is a lowercase operand
            if (ch >= 'a' && ch <= 'z') {
                // Push it as a one-character string
                st.push(string(1, ch));
            } else {
                // Otherwise the character is an operator
                // Pop right operand (top of stack)
                string right = st.top(); st.pop();
                // Pop left operand (next top of stack)
                string left = st.top(); st.pop();
                // Form the infix subexpression with parentheses
                string combined = "(" + left + string(1, ch) + right + ")";
                // Push the combined subexpression back onto the stack
                st.push(combined);
            }
        }
        // The final infix expression is the only item left on the stack
        return st.top();
    }
};
 