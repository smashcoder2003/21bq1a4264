#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>

int beautyValue(std::string s)
{
   int freq[26];

   for (int i = 0; i < 26; i++) 
      freq[i] = 0;


   // Calculating the frequency of each character 
   for (char c: s) 
   {
      freq[c - 'a']++;
   }

   std::sort(freq, freq + 26);

   // for (int ele: freq)
   //    std::cout << ele << std::endl;


   int min = 0;
   int max = 0;
   for (int i = 0; i < 26; i++)
   {
      if (freq[i] != 0) 
      {
         min = freq[i];
         break;
      }
   }

   for (int i = 25; i >=0; i--) 
   {
      if (freq[i] != 0) 
      {
         max = freq[i];
         break;
      }
   }

   return max - min;
}

int beautySum(std:: string s) {
   std::vector<std::string> arr;


   // Generating all possible substring that impact the beautySum
   for (int i = 0; i < s.length(); i++) // aabcb
   {
      for (int j = i + 1; j < s.length(); j++)
      {
         if (i > 0)
            arr.push_back(s.substr(i, j));
         else
            arr.push_back(s.substr(i, j+1));
      }
   }
   std::cout << std::endl;
   
   for (std::string ss: arr)
      std::cout << ss << " ";

   // Finding the beautyValue for each substring
   int sum = 0;
   for (std::string substring: arr)
   {
      // Finding the beauty sum 
      sum += beautyValue(substring);
   }
   return sum;
}

int main() 
{
   std::string s;
   std::cin >> s;
   std:: cout << beautySum(s);
}

