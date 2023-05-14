#include <iostream>
#include "./queue.h"


int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    std::cout << q.peek() << std::endl;
    q.dequeue();
    std::cout << q.peek() << std::endl;
    q.dequeue();
    std::cout << q.peek() << std::endl;
}