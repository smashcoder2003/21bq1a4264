#include <iostream>
#include "bhargav.h"

using namespace bhargav;

void preorder(TreeNode* root) 
{
   if (root == NULL)
      return;
   
   std::cout << root->data << " ";
   preorder(root->left);
   preorder(root->right);
}

int main() 
{
   TreeNode* root = new TreeNode(10);
   root->left = new TreeNode(11);
   root->right = new TreeNode(12);
   preorder(root);
}