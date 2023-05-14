#include <iostream>
#include <queue>


class StackUsingQueue {
   private:
      std::queue<int> myQueue1;
      std::queue<int> myQueue2;

   public:
      void push(int val) {
         myQueue1.push(val);
      }

      void pop() {
         if(myQueue1.empty() & &myQueue2.empty()) {
            std:: cout << "StackUnderFlowError";
            return -1;
         } 
         
         while(!myQueue1.empty()) {
            int lastelement = myQueue1.top();

            if(myQueue1.size() == 1) {
               myQueue1 = myQueue2;
               break;
            }
            myQueue1.pop();
            myQueue2.push(lastelement);
         }
      }

      int top() {
         if()
      }
}
int main() {

}