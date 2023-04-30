#include<iostream>
#include "linked_list.h"

using namespace std;
// pasing head as the a reference.
// Understand pass by reference concept 
// before you see the code.
// For implementation see linked_list.h

int main() {
    Node *temp = new Node(20);
    insert_at_beginning(temp, 10);
    insert_at_beginning(temp, 5);
    display(temp);    
}
