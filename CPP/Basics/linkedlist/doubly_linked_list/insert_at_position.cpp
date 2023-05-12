#include<iostream>
#include "./doubly_linked_list.h"


void insert_at_position(doublyNode* &head, int position, int val) {
    int idx = 1;
    doublyNode* temp = head;
    doublyNode* newNode = new doublyNode(val);

    if(position == 0) {
        newNode -> next = head;
        head -> prev = newNode;
        head = newNode;
        return;
    }

    while(temp -> next != NULL) {
        if(idx == position) {
            
            newNode -> prev = temp;
            newNode -> next = temp -> next;
            temp -> next -> prev = newNode;
            temp -> next = newNode;
            return;
        }
        temp = temp ->next;
    }

    temp -> next = newNode;
    newNode -> prev = temp;
}

int main() {
    doublyNode* temp = new doublyNode(10);
    insert_at_position(temp, 0, 9);
    insert_at_position(temp, 2, 8);

    
    while(temp != NULL) {
        std::cout << temp -> val << " ";
        temp = temp -> next;
    }

}