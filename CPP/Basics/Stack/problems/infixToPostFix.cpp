#include <iostream>
#include <stack>
#include <algorithm>

int precedence(char ch) {
    if(ch == '^') {
        return 3;
    }

    if(ch == '*' || ch == '/') {
        return 2;
    }
    
    if(ch == '+' || ch == '-') {
        return 1;
    }
    else return -1;
}

std::string infixToPostFix(std::string s) {
    std::stack <char> st;
    std::string ans;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(')
            st.push(s[i]);

        else if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {
            ans += s[i];
        }

        else if(s[i] == ')') {
            while(!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            if(!st.empty()) {
                st.pop();
            }
        }

        else {
            while(!st.empty() && precedence(st.top()) > precedence(s[i])) {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while(!st.empty()) {
            ans += st.top();
            st.pop();
    }

    return ans;
}




int main() {
    std::cout << infixToPostFix("(a-b/c)*(a/k-l)") << std::endl;
    
}