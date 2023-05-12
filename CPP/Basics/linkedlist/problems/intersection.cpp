#include<iostream>
#include "/Users/bunty/Documents/GitHub/21bq1a4264/CPP/Basics/linkedlist/linked_list.h"

int intersection(Node* head1, Node* head2) {
    int len1 = length(head1);
    int len2 = length(head2);
    Node* ptr1;
    Node* ptr2;
    int position;
    if(len1 >= len2) {
        position = len1 - len2;
        ptr1 = head1;
        ptr2 = head2;
    } else {
        position = len2 - len1;
        ptr1 = head2;
        ptr2 = head1;
    }

    int count = 0;
    
    while(ptr1 != NULL) {
    
        if(count == position) 
            break;
        ptr1 = ptr1 -> next;
        ++count;
    }

    if(ptr1 == NULL) 
        return -1;

    while(ptr1 != NULL && ptr2 != NULL) {
    
        if(ptr1 == ptr2) {
            return ptr1 -> val;
        }

        ptr1 =  ptr1 -> next;
        ptr2 = ptr2 -> next;
    }

    return -1;
}

int main() {
    Node* l1 = new Node(10);
    insert_at_beginning(l1, 9);
    insert_at_beginning(l1, 8);
    insert_at_beginning(l1, 7);
    insert_at_beginning(l1, 6);
    Node* l2 = new Node(15);
    insertatend(l2, 16);
    insertatend(l2, 17);
    insertatend(l2, 18);
    
    Node* temp = l2;
    while(temp -> next != NULL) {
        temp = temp -> next;
    }
    temp -> next = l1 -> next -> next;
    cout << intersection(l1, l2);
} 