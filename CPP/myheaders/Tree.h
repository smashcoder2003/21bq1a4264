class TreeNode
{
public:
   int data;
   TreeNode *left;
   TreeNode *right;

   TreeNode(int data = NULL,
            TreeNode *left = NULL,
            TreeNode *right = NULL)
   {
      this->data = data;
      this->left = left;
      this->right = right;
   }
};