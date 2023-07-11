/*
Given the root of a binary tree.
replace each node's data with the sum(data) of all it's children.

1<= node->data <= 10^7

*/

#include <iostream>
#include "bhargav.h"

using namespace bhargav;

int sum_replacement(TreeNode* root)
{
   if (root == NULL)
      return 0;
   
   root->data = sum_replacement(root->left) + sum_replacement(root->right) + root->data;
   
   return root->data;
}

int main() 
{
   TreeNode* root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);
   root->right->left = new TreeNode(1);
   root->right->right = new TreeNode(2);
   root->left->right = new TreeNode(1);
   
   sum_replacement(root);
   preorder(root);
}