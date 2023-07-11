#include <iostream>
#include "bhargav.h"
#include <queue>

using namespace bhargav;

int sum_at_k_level(TreeNode *root, int level)
{
   int lvl = 0, sum = 0;
   std::queue<TreeNode *> q;
   q.push(root);
   q.push(NULL);

   if (level == 0)
      return root->data;

   while (!q.empty())
   {
      TreeNode *node = q.front();
      q.pop();

      if (node == NULL)
         lvl++;

      if (node != NULL && node->left)
         q.push(node->left);

      if (node != NULL && node->right)
         q.push(node->right);

      if (node == NULL && !q.empty())
         q.push(NULL);

      if (lvl == level)
      {
         while (q.front() != NULL)
         {
            sum += q.front()->data;
            q.pop();
         }
         
         return sum;
      }

   }
}

int main()
{
   TreeNode *root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);
   root->left->left = new TreeNode(3);
   root->right->right = new TreeNode(3);
   std::cout << sum_at_k_level(root, 2);
}