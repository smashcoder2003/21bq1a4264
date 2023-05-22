#include <iostream>
#include <utility>
#include <queue>


class StackUsingQueue2 {
   
   private:
   std:: queue<int> myQueue1;
   std:: queue<int> myQueue2;

   public:
   void push(int val) {
      myQueue2.push(val);
      while(!myQueue1.empty()) {
         myQueue2.push(myQueue1.front());
         myQueue1.pop();
      }
      
      std:: swap(myQueue1, myQueue2);
   }

   void pop() {
      if (myQueue1.empty()) {
         std:: cout << "StackUnderFlowError" << std:: endl;
      } else {
         myQueue1.pop();
      }
   }

   int top() {
      if (myQueue1.empty()) {
         std:: cout << "StackUnderFlowError" << std:: endl;
         return -1;
      } else {
         return myQueue1.front();
      }
   }

   bool empty() {
      if (myQueue1.empty()) {
         return false;
      } else return true;
   }
};



int main() {
   StackUsingQueue2 myStack;

   myStack.push(1);
   myStack.push(2);

   std:: cout << myStack.top() << std:: endl;
   myStack.pop();

   std:: cout << myStack.top() << std:: endl;
   myStack.pop();

   myStack.pop();
}