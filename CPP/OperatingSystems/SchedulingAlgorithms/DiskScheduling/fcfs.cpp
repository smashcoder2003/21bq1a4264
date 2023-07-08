#include <iostream>
#include <vector>

std:: vector<int> fcfsDiskScheduling(std:: vector<int> sectors, int head)
{
   std:: vector<int> trackSequence;
   int seek_time = 0;

   for(int x: sectors) 
   {
      trackSequence.push_back(std::abs(head - x));
      seek_time += std:: abs(head - x);
      head = x;
   }

   std:: cout << seek_time << std:: endl;

   return trackSequence;
}

int main() 
{
   std:: vector<int> sectors = {176, 79, 34, 60, 92, 11, 41, 114};
   int head = 50;

   std:: vector<int> trackSequence = fcfsDiskScheduling(sectors, head);

   for (int x: trackSequence) 
   {
      std:: cout << x << " ";
   } 
   
   std:: cout << "\n";
}