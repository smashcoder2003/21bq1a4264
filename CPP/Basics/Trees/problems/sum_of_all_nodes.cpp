#include <iostream>
#include "bhargav.h"

using namespace bhargav;

int sum_of_all_nodes(TreeNode *root)
{
   static int sum = 0;

   if (root == NULL)
      return 0;

   sum_of_all_nodes(root->left);
   sum_of_all_nodes(root->right);
   sum += root->data;
   return sum;
}

int main()
{
   TreeNode *root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);
   std::cout << sum_of_all_nodes(root);
}