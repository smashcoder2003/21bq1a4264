#include <iostream>
#include "bhargav.h"
#include <queue>

using namespace bhargav;

void left_view(TreeNode* root)
{
   if (root == NULL)
      return;
   
   std::queue<TreeNode*> q;
   q.push(root);
   q.push(NULL);

   std::cout << root->data << " ";

   while(!q.empty())
   {
      TreeNode* node = q.front();
      q.pop();

      if (node == NULL && !q.empty()){
         q.push(NULL);  
         std::cout << q.front()->data << " ";
      }

      if (node != NULL && node->left) 
         q.push(node->left);
      
      if (node != NULL && node->right)
         q.push(node->right);
   }
}


int main()
{
   TreeNode* root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);
   root->right->right = new TreeNode(4);
   root->right->left = new TreeNode(5);
   left_view(root);
}