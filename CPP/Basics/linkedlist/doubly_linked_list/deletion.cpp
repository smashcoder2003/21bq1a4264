#include<iostream>
#include "./doubly_linked_list.h"

void removeDoublyNode(doublyNode* &head, int val) {
    doublyNode* temp = head;

    if(head == NULL) {
        return;
    }

    else if(temp -> val == val && temp -> next != NULL) {
        temp -> next -> prev = NULL;
        head = temp -> next;
        return;
    }

    else if(temp -> val == val && temp -> next == NULL) {
        head = NULL;
        delete temp;
        return;
    }

    while(temp -> next != NULL) {

        if(temp -> next -> val == val) {

            doublyNode* node_to_be_removed = temp -> next;

            temp -> next = node_to_be_removed -> next;
            if(node_to_be_removed -> next != NULL) {
                node_to_be_removed -> next -> prev = temp;
            }
            
            delete node_to_be_removed;
            return;
        }
        temp =  temp -> next;
    }

}
int main() {
    doublyNode* temp = new doublyNode(10);
    insert_at_head(temp, 9);
    insert_at_head(temp, 8);
    removeDoublyNode(temp, 9);

    while(temp != NULL) {
        std::cout << temp -> val << " ";
        temp = temp -> next;
    }

}