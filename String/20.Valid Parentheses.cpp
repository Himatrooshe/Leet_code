class Solution {
    public:
        bool isValid(string s) {
            stack<char> st;
    
            for (int i = 0; i < s.length(); i++) {
                char ch = s[i];
    
                // If it's an opening bracket, push it
                if (ch == '(' || ch == '{' || ch == '[') {
                    st.push(ch);
                } 
                else {
                    // If stack is empty, no matching opening bracket
                    if (st.empty()) {
                        return false;
                    }
    
                    // Check top of stack
                    char top = st.top();
                    if ((ch == ')' && top == '(') ||
                        (ch == '}' && top == '{') ||
                        (ch == ']' && top == '[')) {
                        st.pop(); // matched, so pop
                    } 
                    else {
                        return false; // mismatch
                    }
                }
            }
            if (st.empty()){
                 return st.empty();
            }else{
                return false;
            }
           
        }
    };