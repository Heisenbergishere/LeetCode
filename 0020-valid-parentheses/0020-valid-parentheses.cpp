class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i = 0;
        while (i < s.size()) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.size() == 0)
                    return false;
                if ((st.top() == '(' && s[i] == ')') ||
                    (st.top() == '{' && s[i] == '}') ||
                    (st.top() == '[' && s[i] == ']')) {
                    st.pop();
                } else return false;
            }
            i++;
        }
        return st.size() == 0;
    }
};