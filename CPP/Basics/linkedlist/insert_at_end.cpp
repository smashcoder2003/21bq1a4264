#include<iostream>
#include "linked_list.h"

using namespace std;

void insertatend(Node* &head, int val) {
    if(head == NULL) {
        head = new Node(val);
        return;
    }
        
    Node *obj = new Node(val);
    Node* temp = head;
    while(temp -> next != NULL) {
        temp = temp -> next;
    }
    temp -> next = obj;
}



int main() {
    Node a(10);
    Node* temp = &a;
    insertatend(temp, 20);
    insertatend(temp, 30);
    insertatend(temp, 40);
    display(temp);
}