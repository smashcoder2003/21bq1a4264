#include <iostream>
#include <stack>
#include <string>


bool balancedParenthesis(std::string s) {
    std::stack<char> st;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
            continue;
        }

        if(s[i] == ')' && st.top() == '('){
            st.pop();
            continue;
        }

        else if(s[i] == '}' && st.top() == '{') {
            st.pop();
            continue;
        }

        else if(s[i] == ']' && st.top() == '[') {
            st.pop();
            continue;
        }

        return 0;
    }
    if(!st.empty())
        return 0;
    return 1;
}

int main() {
    std::cout << balancedParenthesis("{");
}