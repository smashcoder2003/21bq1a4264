#include <iostream>
#include "./circular_linked_list.h"

int main() {
    Node* temp = NULL;
    insert_at_head_circular(temp, 9);
    insert_at_head_circular(temp, 8);
    insert_at_head_circular(temp, 7);
    display(temp);
}