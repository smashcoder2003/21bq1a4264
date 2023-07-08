#include <iostream>
#include "bhargav.h"

using namespace bhargav;

TreeNode *buildPostOrderTree(int postorder[], int inorder[], int start, int end)
{
   static int idx = 4;
   int curr = postorder[idx--];
   TreeNode *node = new TreeNode(curr);

   if (start == end)
      return node;

   int pos = search(inorder, curr, start, end);

   node->right = buildPostOrderTree(postorder, inorder, pos + 1, end);
   node->left = buildPostOrderTree(postorder, inorder, start, pos - 1);
   return node;
}

int main()
{
   int inorder[] = {3, 2, 4, 1, 5};
   int postorder[] = {3, 4, 2, 5, 1};

   preorder(buildPostOrderTree(postorder, inorder, 0, 4));
}