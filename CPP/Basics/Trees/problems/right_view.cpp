#include <iostream>
#include "bhargav.h"
#include <queue>

using namespace bhargav;

void right_view(TreeNode* root)
{
   if (root == NULL)
      return;

   std::queue<TreeNode*> q;
   q.push(root);
   q.push(NULL);

   TreeNode* right_most_node;
   
   while(!q.empty())
   {
      TreeNode* node = q.front();
      q.pop();

      if (node != NULL)
         right_most_node = node;
         
      else 
         std::cout << right_most_node->data << " ";
      
      if(node != NULL)
      {
         if (node->left != NULL)
            q.push(node->left);
         
         if (node->right != NULL)
            q.push(node->right);
      }

      if (node == NULL && !q.empty())
         q.push(NULL);

   }
}

int main()
{
   TreeNode* root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);
   root->right->right = new TreeNode(4);
   root->right->left = new TreeNode(5);
   right_view(root);
}