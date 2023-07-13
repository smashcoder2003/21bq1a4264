#include <iostream>
#include "bhargav.h"

using namespace bhargav;

TreeNode* lowest_common_ancestor(TreeNode* root, TreeNode* n1, TreeNode* n2)
{
   if (root == NULL || root == n1 || root == n2)
      return root;


   TreeNode* left  = lowest_common_ancestor(root->left, n1, n2);
   TreeNode* right = lowest_common_ancestor(root->right, n1, n2);

   if (left != NULL && right != NULL)
      return root;
   
   if (left != NULL)
      return left;
   
   return right;
   
}

int main()
{
   TreeNode* root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);
   root->right->left = new TreeNode(4);
   root->right->right = new TreeNode(5);
   std::cout << \
   lowest_common_ancestor(root,
                  root->left, 
                  root->right->right)->data;
}