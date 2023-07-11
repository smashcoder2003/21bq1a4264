#include <iostream>
#include "bhargav.h"

using namespace bhargav;

int count_no_of_nodes(TreeNode *root)
{
   static int count = 0;

   if (root == NULL)
      return 0;

   count_no_of_nodes(root->left);
   count_no_of_nodes(root->right);
   count++;

   return count;
}

int main()
{
   TreeNode *root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);

   std::cout << count_no_of_nodes(root);
}