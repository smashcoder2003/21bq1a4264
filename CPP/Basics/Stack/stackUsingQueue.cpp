#include <iostream>
#include <queue>
#include <utility>

class StackUsingQueue {
   private:
      std:: queue<int> myQueue1;
      std:: queue<int> myQueue2;

   public:
      void push(int val) {
         myQueue1.push(val);
      }

      void pop() {
         if (myQueue1.empty() && myQueue2.empty()) {
            std:: cout << "StackUnderFlowError" << std:: endl;
            return;
         }

         while(myQueue1.size() > 1) {
            int poppedElement = myQueue1.front();
            myQueue1.pop();
            myQueue2.push(poppedElement);
         }

         myQueue1.pop();
         swap(myQueue1, myQueue2);
      }

      int top() {
         if (myQueue1.empty() && myQueue2.empty()) {
            std:: cout << "StackUnderFlowError" << std:: endl;
            return -1;
         }

         while(myQueue1.size() > 1) {
            int poppedElement = myQueue1.front();
            myQueue1.pop();
            myQueue2.push(poppedElement);
         }

         int lastElement = myQueue1.front();
         myQueue1.pop();
         myQueue2.push(lastElement);

         swap(myQueue1, myQueue2);
         return lastElement;
      }

      bool empty() {
         if(myQueue1.empty()) {
            return 1;
         }
         return 0;
      }
};


int main() {
   StackUsingQueue myStack;
   
   myStack.push(10);
   myStack.push(20);
   myStack.push(30);
   
   std:: cout << myStack.top() << std:: endl;
   myStack.pop();

   std:: cout << myStack.top() << std:: endl;
   myStack.pop();

   std:: cout << myStack.empty() << std:: endl;
   myStack.pop();
   myStack.pop();
}