#include<iostream>
#include "linked_list.h"
using namespace std;

void deleteNode(Node* &head, int val) {
    Node* temp = head;
    if(head == NULL) {
        return;
    }
    
    else if(temp -> val == val) {
        head = head -> next;
    }

    else {
        
        while(temp -> next && temp -> next -> val != val) {
            temp = temp -> next;
        }

        if (!(temp -> next)) {
            return;
        }

        else if(temp -> next -> val == val) {
            Node* todelete = temp -> next;
            temp -> next = temp -> next -> next;
            delete todelete;
        }
    }    
}

int main() {
    Node* temp = new Node(10);
    insert_at_beginning(temp, 5);
    insert_at_beginning(temp, 2);
    insert_at_beginning(temp, 1);
    deleteNode(temp, 15);
    display(temp);
}