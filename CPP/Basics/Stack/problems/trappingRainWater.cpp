#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int rainWater(vector<int> c) {
   int rainWater = 0;
   stack<int> st;
   int n = c.size();

   for (int i = 0; i < n; i++) {

      while (!st.empty() && c[st.top()] < c[i]) {
         int curr = st.top();
         st.pop();

         if (st.empty()) {
            break;
         }

         int diff = i - curr;
         rainWater += (min(c[st.top()], c[i]) - c[curr]) * diff;
      }
      
      st.push(i);
   }

   return rainWater;
}


int main() {
   std::vector<int> containers = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
   std::cout << rainWater(containers) << std::endl;

}