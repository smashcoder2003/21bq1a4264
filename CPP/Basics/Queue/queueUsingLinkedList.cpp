#include <iostream>
#include "/Users/bunty/Documents/GitHub/21bq1a4264/CPP/Basics/linkedlist/linked_list.h"


class QueueL {
   private:
      Node* front;
      Node* back;

   public:
      QueueL() {
         front = NULL;
         back = NULL;
      }

      void enqueue(int val) {  // to be continued
         if(front == NULL) {
            front = new Node(val);
            back = front;
         } else {
               back -> next = new Node(val);
               back = back -> next;
         }
      }
      
      void dequeue() {
         if(front == NULL) {
            std:: cout << "QueueUnderFlowError";
         } else {
            Node * toDelete = front;
            front = front -> next;
            delete toDelete;
         }
      }

      int peek() {
         if(front == NULL) {
            std::cout << "Queue UnderFlowError" << std::endl;
         } else {
            return front -> val;
         }
      }

      bool empty() {
         return front == NULL;
      }
};


int main() {
   QueueL myQueue;

   myQueue.enqueue(10);
   myQueue.enqueue(15);
   myQueue.enqueue(20);

   std::cout << myQueue.peek() << std:: endl;

   myQueue.dequeue();
   std::cout << myQueue.peek() << std:: endl;

   myQueue.dequeue();
   std::cout << myQueue.peek() << std:: endl;

   myQueue.dequeue();
   std::cout << myQueue.peek() << std:: endl;

   std::cout << myQueue.empty() << std:: endl;
}