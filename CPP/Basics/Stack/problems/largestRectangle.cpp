#include <iostream>
#include <stack>

using namespace std;

int largestRectangle(vector<int> arr)
{
   int n = arr.size();
   int ans = 0;

   for (int i = 0; i < n; i++) 
   {
      int l = i;
      int r = i;
      if (i > 0 && arr[i] == arr[i-1])
         continue;

      while(l >= 0 && arr[l] >= arr[i]) 
         l--;
         
      while(r <= n - 1 && arr[r] >= arr[i])
         r++;

      r--;
      l++;

      int diff = r - l + 1;
      ans = max(ans, arr[i] * diff);
   }

   return ans;
}

int main()
{
   vector<int> arr = {1, 1, 1, 1, 1, 1};
   cout << largestRectangle(arr) << endl; 
}