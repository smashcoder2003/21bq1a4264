#include <iostream>
#include "bhargav.h"
#include <queue>
#include <algorithm>

using namespace bhargav;

int width_of_a_tree(TreeNode* root)
{
   if (root == NULL) 
      return 0;

   std::queue<TreeNode*> q;
   q.push(root);
   q.push(NULL);

   int width = 0;
   int maxwidth = 0;

   while(!q.empty())
   {
      TreeNode* node = q.front();
      q.pop();

      if(node != NULL)
         width++;
      else
      {
         maxwidth = std::max(width, maxwidth);
         width = 0;
      }

      if(node && node->left)
         q.push(node->left);

      if(node && node->right)
         q.push(node->right);
         
      if(node == NULL && !q.empty())
         q.push(NULL);
   }

   return maxwidth;
}

int main() 
{
   TreeNode* root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);

   std::cout << width_of_a_tree(root);
}