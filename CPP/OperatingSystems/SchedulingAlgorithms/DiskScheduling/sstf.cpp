#include <iostream>
#include <vector>

std:: vector<int> sstfDiskScheduling(std:: vector<int> sectors, int head) 
{
   int n = sectors.size();
   int seek_time = 0;
   
   std:: vector<int> ans;
   ans.push_back(head);

   for (int i = 0; i < n; i++)
   {
      int min_sector_ind = i;
      int min_seek_time = std:: abs(sectors[min_sector_ind] - head);

      for (int j = i + 1; j < n; j++) 
      {
         int displacement = std:: abs(sectors[j] - head);
         
         if (displacement < min_seek_time) 
         {
            min_sector_ind = j;
            min_seek_time = displacement;
         }
      }

      seek_time += min_seek_time;
      head = sectors[min_sector_ind];
      ans.push_back(head);

      std:: swap(sectors[min_sector_ind], sectors[i]);
   }

   return ans;
}


int main() 
{
   std:: vector<int> sectors = {71, 54, 176, 22, 19};
   int head = 70;
   
   std:: vector<int> ans = sstfDiskScheduling(sectors, head);
   
   for (int ele: ans)
   {
      std:: cout << ele << " ";
   }
}