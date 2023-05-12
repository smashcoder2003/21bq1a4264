#include <iostream>
#include "/Users/bunty/Documents/GitHub/21bq1a4264/CPP/Basics/linkedlist/linked_list.h"

void evenAfterOdd(Node* head) {
    Node* odd = head;
    Node* even = head -> next;
    Node* evenStart = even;

    while(odd != NULL && even != NULL && even -> next != NULL && odd -> next != NULL) {
        odd -> next = even -> next;
        odd = odd -> next;
        even -> next = odd -> next;
        even = even -> next;
    }
    
    odd -> next = evenStart;
    if(odd -> next == NULL) {
        even -> next = NULL;
    }
}

int main() {
    Node* temp = new Node(1);
    insertatend(temp, 2);
    insertatend(temp, 3);
    insertatend(temp, 4);
    insertatend(temp, 5);
    insertatend(temp, 6);
    evenAfterOdd(temp);
    display(temp);
}