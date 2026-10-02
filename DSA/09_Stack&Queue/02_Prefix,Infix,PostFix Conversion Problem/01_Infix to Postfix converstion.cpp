class Solution {
public:
    // Return precedence of operators
    int precedence(char op) {
        if(op == '+' || op == '-') 
            return 1;
        if(op == '*' || op == '/') 
            return 2;
        if(op == '^') 
            return 3;
        return 0;
    }
 
    // Check if operator is right associative
    bool isRightAssociative(char op) {
        return op == '^';
    }
 
    // Check if character is operator
    bool isOperator(char c) {
        return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
    }
 
    // Convert infix to postfix
    string infixToPostfix(string s) {
        // Initialize output string
        string result = "";
        // Initialize stack for operators
        stack<char> st;
 
        for(char c : s) {
            // If operand, add to output
            if(isalnum(c)) {
                result += c;
            } 
            // If '(', push to stack
            else if(c == '(') {
                st.push(c);
            } 
            // If ')', pop till '('
            else if(c == ')') {
                while(!st.empty() && st.top() != '(') {
                    result += st.top();
                    st.pop();
                }
                st.pop();
            } 
            // If operator
            else if(isOperator(c)) {
                while(!st.empty() && st.top() != '(' &&
                      (precedence(st.top()) > precedence(c) || 
                      (precedence(st.top()) == precedence(c) && !isRightAssociative(c)))) {
                    result += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
 
        // Pop remaining operators
        while(!st.empty()) {
            result += st.top();
            st.pop();
        }
 
        return result;
    }
};
 