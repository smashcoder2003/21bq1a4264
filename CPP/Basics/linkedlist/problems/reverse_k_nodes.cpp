#include<iostream>
#include</Users/bunty/Documents/GitHub/21bq1a4264/CPP/Basics/linkedlist/linked_list.h>

using namespace std;

Node* reverse_k_nodes(Node* head, int k) {
    Node* prev = NULL;
    Node* curr = head;
    Node* nextptr;
    int count = 0;

    while(curr != NULL && count < k) {
        nextptr = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextptr;
        count++;
    }

    if(nextptr != NULL)
        head -> next = reverse_k_nodes(nextptr, k);

    return prev; 
}
int main() {
    Node* temp = new Node(5);
    insert_at_beginning(temp,4);
    insert_at_beginning(temp,3);
    insert_at_beginning(temp,2);
    insert_at_beginning(temp,1);
    display(temp);
    temp = reverse_k_nodes(temp, 2);
    display(temp);
}