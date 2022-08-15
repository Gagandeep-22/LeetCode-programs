class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> mp;
        mp['('] =')';
        stack<char> st;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            }
            else {
                if(st.empty())
                    return false;
                switch(s[i]) {
                    case ')' :
                        if(st.top() != '(') {
                            return false;
                        }
                        st.pop();
                        break;
                    case '}' :
                        if(st.top() != '{') {
                            return false;
                        }
                        st.pop();
                        break;
                    case ']' :
                        if(st.top() != '[') {
                            return false;
                        }
                        st.pop();
                        break;
                }
            }
        }
        if(!st.empty())
            return false;
        return true;
    }
};
