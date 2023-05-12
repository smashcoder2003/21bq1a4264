#include <iostream>
#include "/Users/bunty/Documents/GitHub/21bq1a4264/CPP/Basics/linkedlist/linked_list.h"
Node* mergeLL(Node* head1, Node* head2) {
    Node* temp = new Node(-1);
    Node* dummy = temp;
    while(head1 != NULL && head2 != NULL) {
        if(head1 -> val <= head2 -> val) {
            dummy -> next = head1;
            head1 = head1 -> next;
            dummy = dummy -> next;
        }
        else {
            dummy -> next = head2;
            head2 = head2 -> next;
            dummy = dummy -> next;
        }
    }
    while(head1 != NULL) {
        dummy -> next = head1;
        head1 = head1 -> next;
        dummy = dummy -> next;
    }
    while(head2 != NULL) {
        dummy -> next = head2;
        head2 = head2 -> next;
        dummy = dummy -> next;
    }
    return temp -> next;
}

int main() {
    Node* l1 = new Node(10);
    insertatend(l1, 11);
    insertatend(l1, 12);
    insertatend(l1, 13);
    insertatend(l1, 14);
    insertatend(l1, 15);
    Node* l2 = new Node(12);
    insertatend(l2, 13);
    insertatend(l2, 14);
    insertatend(l2, 15);
    insertatend(l2, 16);
    display(mergeLL(l1, l2));
}