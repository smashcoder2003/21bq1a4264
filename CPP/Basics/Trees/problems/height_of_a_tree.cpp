#include <iostream>
#include "bhargav.h"
#include <queue>

using namespace bhargav;

// Function to estimate the height
int height_of_a_tree(TreeNode* root)
{
   int height = 0;
   // queue to traverse each level
   std::queue<TreeNode*> q;
   if (root == NULL)
      return 0;

   q.push(root);
   q.push(NULL);

   while(!q.empty())
   {
      TreeNode* node = q.front();
      q.pop();

      // incrementing height by 1 for each lvl we
      // traverse
      if (node == NULL)
         height++;
      
      if (node != NULL && node->left)
         q.push(node->left);
      
      if (node != NULL && node->right)
         q.push(node->right);
      
      if (node == NULL && !q.empty())
         q.push(NULL);
   }    

   return height;
}

int main() 
{
   TreeNode* root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);
   std::cout << height_of_a_tree(root);
}
