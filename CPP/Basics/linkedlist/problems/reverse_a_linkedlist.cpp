#include<iostream>
#include "/Users/bunty/Documents/GitHub/21bq1a4264/CPP/Basics/linkedlist/linked_list.h"

using namespace std;

void reverse_a_linked_list(Node* &head) {
    Node* previous = NULL;
    Node* current = head;
    Node* next = current -> next;
    
    while(current) {
        if(current -> next == NULL) {
            current -> next = previous;
            head = current;
            return;
        }
        current -> next = previous;
        previous = current;
        current = next;
        next = next -> next;
        
    }
}



int main() {
    Node* temp = new Node(5);
    insert_at_beginning(temp, 4);
    insert_at_beginning(temp, 3);
    insert_at_beginning(temp, 2);
    display(temp);
    reverse_a_linked_list(temp);
    display(temp);

}