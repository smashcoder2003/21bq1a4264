#include<iostream>
#include "/Users/bunty/Documents/GitHub/21bq1a4264/CPP/Basics/linkedlist/linked_list.h"


void appendLastKNodes(Node* &head, int k) {
    int count = 1;
    int len = length(head);
    Node* newTail;
    Node* tail = head;
    Node* newHead;
    while(tail -> next != NULL) {
        if(count == (len - k)) {
            newTail = tail;
        }
        else if (count == (len - k + 1)) {
            newHead = tail;
        }
        tail = tail -> next;
        ++count;
    }
    tail -> next = head;
    newTail -> next = NULL;
    head = newHead;
}
int main() {
    Node* l1 = new Node(10);
    insertatend(l1, 9);
    insertatend(l1, 8);
    insertatend(l1, 7);
    insertatend(l1, 6);
    insertatend(l1, 5);
    appendLastKNodes(l1, 4);
    display(l1);
}