#include <iostream>
#include "bhargav.h"

using namespace bhargav;

TreeNode* flatten_tree(TreeNode* root)
{
   if (root == NULL || root->left == NULL || root->right == NULL)
      return NULL;

   if (root->left != NULL)
   {
      flatten_tree(root->left);
      
      TreeNode* tmp_right = root->right;
      root->right = root->left;
      root->left = NULL;

      TreeNode* temp = root->right;

      while (temp->right != NULL)
         temp = temp->right;
      
      temp->right = tmp_right;

      flatten_tree(tmp_right);
   }
   return root;
}

int main()
{
   TreeNode* root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);

   flatten_tree(root);
   TreeNode* temp = root;

   while (temp != NULL)
   {
      std::cout << temp->data << " ";
      temp = temp->right;
   }

}