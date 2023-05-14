#include <iostream>
#include <stack>

class QueueUsingStack {
   private:
      std::stack<int> s1;
      std::stack<int> s2;

   public:
      void enqueue(int val) {
         s1.push(val);
      }

      void dequeue() {
         if(s1.empty() && s2.empty()) {
            std:: cout << "QueueUnderFlowError" << std:: endl;
         } else if(s2.empty()) {
            // Transferring the contents of s1 to s2 this converts LIFO into FIFO
            while(!s1.empty()) {
               s2.push(s1.top());
               s1.pop();
            }
         }
         s2.pop();
      }

      int peek() {
         if(!s1.empty() && s2.empty()) {

            while(!s1.empty()) {
               s2.push(s1.top());
               s1.pop();
            }
         } else if(s2.empty()) {
            std:: cout << "QueueUnderFlowError" << std:: endl;
            return -1;
         } 
         
         return s2.top();
      }

      bool empty() {
         return s1.empty() && s2.empty();
      }
};


int main() {
   QueueUsingStack myQueue;
   
   myQueue.enqueue(11);
   myQueue.enqueue(20);

   std:: cout << myQueue.peek() << std:: endl;

   myQueue.dequeue();
   std:: cout << myQueue.peek() << std:: endl;

   myQueue.dequeue();
   std:: cout << myQueue.peek();
   
}