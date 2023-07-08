#include <iostream>
#include "bhargav.h"
#include <queue>

using namespace bhargav;

void levelOrderTraversal(TreeNode *root)
{
   std::queue<TreeNode *> Q;
   Q.push(root);
   while (!Q.empty())
   {
      TreeNode *node = Q.front();
      Q.pop();
      node->left != NULL ? Q.push(node->left) : (void)0;
      node->right != NULL ? Q.push(node->right) : (void)0;
      std::cout << node->data << " ";
   }
}

int main()
{
   TreeNode *root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);

   levelOrderTraversal(root);
}