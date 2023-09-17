#include <iostream>
#include "/Users/bunty/Documents/GitHub/21bq1a4264/CPP/Basics/linkedlist/linked_list.h"

void insert_at_head_circular(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        head->next = newNode;
        return;
    }

    newNode->next = head;
    Node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
