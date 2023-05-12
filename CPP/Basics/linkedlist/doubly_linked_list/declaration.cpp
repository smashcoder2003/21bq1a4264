#include<iostream>
#include "./doubly_linked_list.h"

int main() {
    doublyNode* temp = new doublyNode(10);
    temp -> next = new doublyNode(11);
    temp -> prev = new doublyNode(9);
    
    std::cout << temp -> val << std::endl;
    std::cout << temp -> next -> val << std::endl;
    std::cout << temp -> prev -> val << std::endl;
}