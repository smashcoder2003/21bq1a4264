#include<iostream>
#include "linked_list.h"

using namespace std;

void deleteNode(Node* &head, int val) {
    Node* temp = head;
    
    if(temp -> val == val) {
        head = head -> next;
    }

    else {
        
        while(temp -> next && temp -> next -> val != val) {
            temp = temp -> next;
        }

        if(temp -> next -> val == val) {
            temp -> next = temp -> next -> next;
        }
    }    
}

int main() {
    Node* temp = new Node(10);
    insert_at_beginning(temp, 5);
    insert_at_beginning(temp, 2);
    insert_at_beginning(temp, 1);
    deleteNode(temp, 10);
    display(temp);
}