#include <iostream>
#include "bhargav.h"

using namespace bhargav;

int distance_helper(TreeNode* root, TreeNode* target, int &height)
{
   if (root == NULL)
      return -1;
   
   if (root == target)
      return ++height;

   int left = distance(root->left, target, height);

   if (left >= 0)
      return ++height;
   
   int right = distance(root->right, target, height);
   
   if (right >= 0)
      return ++height;

   return height;
}

vector<int> nodes_at_distance_k(TreeNode* root, TreeNode* target, int k)
{
   // find the target node along with it's depth
   // find all the nodes with distance k in it's subtrees
   // find all the nodes with depth - k if depth > k else
   // There are no more nodes left in the root->left
   // so there are nodes depth == k then the root nodes is at
   // k distance
   // if depth < k then we might have nodes at the right.


}

int main()
{
   TreeNode* root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);
}