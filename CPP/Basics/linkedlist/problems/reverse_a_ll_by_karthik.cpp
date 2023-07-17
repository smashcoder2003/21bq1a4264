#include <iostream>
#include "bhargav.h"

using namespace bhargav;

Node* reverse_a_linked_list(Node* head)
{
   Node* new_head = nullptr;
   int i=0;
   int count = 0;
   int len=0;
   Node* prev;

   if (head -> next == nullptr)
      return head;

   while(i<=len)
   {
      Node* temp = head;
      
      while (temp->next->next != NULL) 
      {
         temp = temp -> next;
         count++;
      }

      if (i==0) 
      {
         new_head = temp->next;
         len=count;
      }  

      prev = temp;
      temp->next->next = prev;
      prev->next = nullptr;
      i++;
   }
   
   return new_head;
}

int main()
{
   Node* head = new Node(1);
   // head->next = new Node(2);
   // head->next->next = new Node(3);
   
   head = reverse_a_linked_list(head);
   display(head);
}