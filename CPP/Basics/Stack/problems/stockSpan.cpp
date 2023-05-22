#include <iostream>
#include <stack>

using namespace std;


std::vector<int> stockSpan(std:: vector<int> stocks) {
   std:: stack<std:: pair<int,int>> st;
   std:: vector<int> ans;

   for(auto stock: stocks) {
      int spawn = 1;

      while(!st.empty() && st.top().first <= stock) {
         spawn += st.top().second;
         st.pop();
      }  

      st.push(std::make_pair(stock, spawn));
      ans.push_back(spawn);
   }
 
   return ans;
}

int main() {
   std::vector<int> stocks = {60, 81, 82, 70, 85};

   for (auto x: stockSpan(stocks)) {
      std:: cout << x << " ";
   } std:: cout << std::endl;
}