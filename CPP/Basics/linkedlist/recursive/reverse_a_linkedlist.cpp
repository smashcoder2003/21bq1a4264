#include <iostream>
#include </Users/bunty/Documents/GitHub/21bq1a4264/CPP/Basics/linkedlist/linked_list.h>

using namespace std;

Node *reverse_ll(Node *&head)
{
    Node *temp = head;
    if (head == NULL)
    {
        return head;
    }
    else if (temp->next == NULL)
    {
        head = temp;
        return temp;
    }
    temp->next->next = reverse_ll(temp->next);
    return temp;
}

int main()
{
    Node *temp = new Node(10);
    insert_at_beginning(temp, 9);
    insert_at_beginning(temp, 8);
    temp = reverse_ll(temp);
    display(temp);
}