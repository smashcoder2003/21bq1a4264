#include <iostream>
#include <string>

int unique_characters(std::string s)
{
   std::unordered_map<char, int> hash_map;
   for (char ch : s)
   {
      hash_map[ch]++;
   }
   int count = 0;
   for (char ch : s)
   {
      if (hash_map[ch] == 1)
         count++;
   }

   return count;
}

int main()
{
   std::string s;
   std::cin >> s;
   std::cout << unique_characters(s);
}