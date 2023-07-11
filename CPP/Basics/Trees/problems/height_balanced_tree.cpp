#include <iostream>
#include "bhargav.h"

using namespace bhargav;

int balanced_tree(TreeNode* root, bool flag=false)
{
   if (root == NULL)
      return 0;

   int left_height = balanced_tree(root->left);
   
   if (left_height == -1)
      return -1;

   int right_height= balanced_tree(root->right);
   
   if (right_height == -1)
      return -1;

   int height_difference = std::abs(left_height-right_height) + 1;
   
   if (height_difference > 1)
      return -1;
   
   return std::max(left_height, right_height) + 1;
}


int main() 
{
   TreeNode* root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);

   bool is_balanced = (balanced_tree(root) != -1);
   std::cout << (is_balanced?"yes":"no");   

   delete root->left;
   delete root->right;
   delete root;
}