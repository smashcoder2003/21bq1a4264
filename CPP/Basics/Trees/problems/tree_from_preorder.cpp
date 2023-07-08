#include <iostream>
#include "bhargav.h"

using namespace bhargav;

TreeNode *buildtree(int inorder[],
                    int preorder[],
                    int start,
                    int end)
{

   static int idx = 0;
   int curr = preorder[idx++];
   TreeNode *node = new TreeNode(curr);

   if (start == end)
      return node;

   int pos = search(inorder, curr, start, end);

   node->left = buildtree(inorder, preorder, start, pos - 1);
   node->right = buildtree(inorder, preorder, pos + 1, end);
   return node;
}

int main()
{
   int inorder[] = {3, 2, 4, 1, 5};
   int preorder[] = {1, 2, 3, 4, 5};

   bhargav::preorder(buildtree(inorder, preorder, 0, 4));
}