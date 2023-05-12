#include <iostream>
#include <stack>
#include <string>

void reverseSentence(std::string s) {
    std::stack<std::string> st;
    std::string k="";

    for(char x: s + ' ') {
        if(x == ' ') {
            st.push(k);
            k = "";
        }
        k += x;
    }

    while(!st.empty()) {
        std::cout << st.top() << " ";
        st.pop();
    } 
    std::cout << std::endl;
}

int main() {
    reverseSentence("Hey, how are you doing?");
}