#include <iostream>
#include <deque>

std::vector<int> slidingWindowMaximum(std::vector<int> arr, int k)
{
   std::deque<int> dq;
   std::vector<int> ans;

   for (int i = 0; i < k && i < arr.size(); i++)
   {
      while (!dq.empty() && arr[dq.back()] <= arr[i])
      {
         dq.pop_back();
      }
      dq.push_back(i);
   }

   ans.push_back(arr[dq.front()]);

   for (int i = k; i < arr.size(); i++)
   {
      if (dq.front() == i - k)
      {
         dq.pop_front();
      }

      while (!dq.empty() && arr[i] >= arr[dq.front()])
      {
         dq.pop_front();
      }
      dq.push_back(i);
      ans.push_back(arr[dq.front()]);
   }

   return ans;
}

int main()
{
   std::vector<int> arr = {3, 4, 9, 1, -4, 10};
   int k;
   std::cin >> k;

   for (int x : slidingWindowMaximum(arr, k))
   {
      std::cout << x << " ";
   }
   std::cout << "\n";
}