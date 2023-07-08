#include <iostream>
#include "bhargav.h"

using namespace bhargav;

void inorder(TreeNode* root) 
{
   if (root == NULL) 
      return;

   inorder(root->left);
   std::cout << root->data << "\n";
   inorder(root->right);
}

int main()
{
   TreeNode* root = new TreeNode(10);
   root->left = new TreeNode(11);
   root->right = new TreeNode(12);
   inorder(root);

}