#include <iostream>
#include "bhargav.h"

using namespace bhargav;

void postorder(TreeNode* root)
{
   if (root == NULL) 
      return;

   postorder(root->left);
   postorder(root->right);
   std::cout << root->data;
}

int main() 
{
   TreeNode* root = new TreeNode(10);
   root->left = new TreeNode(11);
   root->right = new TreeNode(12);
   postorder(root);
}