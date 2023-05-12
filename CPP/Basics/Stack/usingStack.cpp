#include <iostream>
#include "./stack.h"

int main() {
    Stack s;
    s.push(10);
    s.push(11);
    std::cout << s.pop() << std::endl;
    std::cout << s.pop() << std::endl;
}