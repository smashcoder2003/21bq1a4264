#include <iostream>
#include "bhargav.h"

using namespace bhargav;

// Helper function to retain the value of height
int distance_helper(TreeNode* root, TreeNode*n1, int &height)
{
   if (root == NULL)
      return -1;
   
   if (root == n1)
      return ++height;

   int left = distance_helper(root->left, n1, height);

   if (left >= 0)
      return ++height;

   int right = distance_helper(root->right, n1, height);
   
   if (right >= 0)
      return ++height;
   
   return height;
}

// Function to calculate distance between two nodes
int distance(TreeNode* root, TreeNode*n1)
{
   int height = -1;
   return distance_helper(root, n1, height);
}


// function to find the shortest between two nodes
int shortest_distance(TreeNode* root, TreeNode* n1, TreeNode* n2)
{
   TreeNode* lca = lowest_common_ancestor(root, n1, n2);
   return (distance(lca, n1) + distance(lca, n2));
}


int main()
{
   TreeNode* root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);
   root->right->left = new TreeNode(4);
   root->right->right = new TreeNode(5);

   std:: cout << shortest_distance(root, root->right->left,root->right->right);
}