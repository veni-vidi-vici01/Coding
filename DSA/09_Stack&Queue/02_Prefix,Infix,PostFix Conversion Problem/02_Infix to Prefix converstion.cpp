class Solution {
 
    // Function to return the precedence of an operator
    // Higher value indicates higher precedence
    int precedence(char op) {
        // '+' and '-' have precedence 1
        if(op == '+' || op == '-') 
            return 1;
        // '*' and '/' have precedence 2
        if(op == '*' || op == '/') 
            return 2;
        // Other characters (like parentheses) have precedence 0
        return 0;
    }
 
public:
    // Function to convert an infix expression to prefix
    string infixToPrefix(const string& s) {
        // Make a copy of input string
        string str = s;
        // Reverse the string to process for prefix conversion
        reverse(str.begin(), str.end());
 
        // Swap '(' with ')' and vice versa after reversing
        for (char &c : str) {
            // Replace '(' with ')'
            if(c == '(') 
                c = ')';
            // Replace ')' with '('
            else if(c == ')') 
                c = '(';
        }
 
        // Stack to store operators while processing
        stack<char> st;
        // String to store the resulting prefix expression
        string res = "";
 
        // Traverse each character in the reversed string
        for(char c : str) {
            // If character is an operand (a-z)
            if(isalpha(c)) 
                res += c;
 
            // If character is opening parenthesis
            else if(c == '(') 
                st.push(c);
 
            // If character is closing parenthesis
            else if(c == ')') {
                // Pop operators from stack until '(' is found
                while(!st.empty() && st.top() != '(') {
                    res += st.top();
                    st.pop();
                }
                st.pop();
            }
 
            // If character is an operator
            else {
                // Pop operators from stack with higher precedence
                while(!st.empty() && precedence(st.top()) > precedence(c)) {
                    res += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
 
        // Pop any remaining operators from the stack
        while(!st.empty()) {
            res += st.top();
            st.pop();
        }
 
        // Reverse the result string to get the final prefix expression
        reverse(res.begin(), res.end());
        return res;
    }
};