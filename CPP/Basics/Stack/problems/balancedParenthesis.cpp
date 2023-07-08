#include <iostream>
#include <stack>
#include <string>

bool balancedParenthesis(std::string s)
{
   std::stack<char> st;

   for (int i = 0; i < s.length(); i++)
   {

      if (s[i] == '(' || s[i] == '{' || s[i] == '[')
      {
         st.push(s[i]);
      }

      if (s[i] == ')' && st.top() == '(')
      {
         st.pop();
      }
      else if (s[i] == '}' && st.top() == '{')
      {
         st.pop();
      }
      else if (s[i] == ']' && st.top() == '[')
      {
         st.pop();
      }

      return false;
   }

   if (!st.empty())
      return false;

   return true;
}

int main()
{
   std::cout << balancedParenthesis("{");
}
