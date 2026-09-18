class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 != 0) return 0;
        
        stack<char> v;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                v.push(s[i]);
            } else {
                if(v.empty()) {
                    return 0;
                }
                if((s[i] == ')' && v.top() == '(') || 
                   (s[i] == ']' && v.top() == '[') || 
                   (s[i] == '}' && v.top() == '{')) {
                    v.pop();
                } else {
                    return 0;
                }
            }
        }
        return v.empty();
    }
};
