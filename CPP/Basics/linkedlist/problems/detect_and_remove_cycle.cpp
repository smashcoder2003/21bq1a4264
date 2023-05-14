#include<iostream> 
#include "/Users/bunty/Documents/GitHub/21bq1a4264/CPP/Basics/linkedlist/linked_list.h"

void makeCycle(Node* head, int position) {
    Node* temp = head;
    int idx = 0;
    Node* loopNode=NULL;

    while(temp != NULL && temp -> next != NULL) {
        
        if(loopNode == NULL && idx == position) {
         loopNode = temp;
        }

        temp = temp -> next;
        
        if(idx != position)
            ++idx;
    }

    if(idx == position) {
        loopNode = temp;
    }

    if(loopNode != NULL && idx == position) {
        temp -> next = loopNode;
    }
}

bool detectCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    
    while(fast != NULL && fast -> next != NULL) {

        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast) {
            return true;
        }
    }
    return false;
}

void removeCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast) {
            fast = head;
            break;
        }
    }

    if(fast == head) {
        while(fast -> next != slow -> next) {
            slow = slow -> next;
            fast = fast -> next;    
        }
       slow -> next = NULL;
    }
}


int main() {
    Node* temp = new Node(10);
    insert_at_beginning(temp, 9);
    insert_at_beginning(temp, 8);
    insert_at_beginning(temp, 7);
    makeCycle(temp, 3);
    display(temp);
    cout << detectCycle(temp) << endl;
    // removeCycle(temp);
    // display(temp);
}