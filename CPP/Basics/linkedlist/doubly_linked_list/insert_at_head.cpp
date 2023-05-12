#include<iostream>
#include "./doubly_linked_list.h"

void insert_at_head(doublyNode* &head, int val) {
    doublyNode* newNode = new doublyNode(val);
    if(!(head)) {
        head = newNode;
    }

    else {
        newNode -> next = head;
        head -> prev = newNode;
        head = newNode;
    }
}
int main() {
    doublyNode* temp = NULL;
    insert_at_head(temp, 10);
    insert_at_head(temp, 9);
    insert_at_head(temp, 8);
    std::cout << temp -> val << std::endl;
}