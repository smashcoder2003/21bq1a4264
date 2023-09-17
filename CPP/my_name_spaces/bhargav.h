#include <iostream>

namespace bhargav
{
   class TreeNode
   {
   public:
      int data;
      TreeNode *left;
      TreeNode *right;

      TreeNode(int data = 0,
               TreeNode *left = NULL,
               TreeNode *right = NULL)
      {
         this->data = data;
         this->left = left;
         this->right = right;
      }
   };

   TreeNode *lowest_common_ancestor(TreeNode *root, TreeNode *n1, TreeNode *n2)
   {
      if (root == NULL || root == n1 || root == n2)
         return root;

      TreeNode *left = lowest_common_ancestor(root->left, n1, n2);
      TreeNode *right = lowest_common_ancestor(root->right, n1, n2);

      if (left != NULL && right != NULL)
         return root;

      if (left != NULL)
         return left;

      return right;
   }
   void preorder(TreeNode *root)
   {
      if (root == NULL)
         return;

      std::cout << root->data << " ";
      preorder(root->left);
      preorder(root->right);
   }

   int search(int inorder[], int curr, int start, int end)
   {
      int pos = 0;

      for (int i = start; i <= end; i++)
      {
         if (inorder[i] == curr)
            return i;
      }
      return -1;
   }

   class Node
   {
   public:
      int val;
      Node *next;

      Node(int val)
      {
         this->val = val;
         this->next = NULL;
      }

      Node(int val, Node *next)
      {
         this->val = val;
         this->next = next;
      }
   };

   void display(Node *head)
   {
      Node *temp = head;

      while (temp != NULL)
      {
         std::cout << temp->val << " ";
         temp = temp->next;
      }
      std::cout << std::endl;
   }

   void insert_at_beginning(Node *&head, int val)
   {
      Node *obj = new Node(val);
      obj->next = head;
      head = obj;
      return;
   }

   void insertatend(Node *&head, int val)
   {
      if (head == NULL)
      {
         head = new Node(val);
         return;
      }

      Node *obj = new Node(val);
      Node *temp = head;

      while (temp->next != NULL)
      {
         temp = temp->next;
      }
      temp->next = obj;
   }

   int length(Node *head)
   {
      int count = 0;

      while (head != NULL)
      {
         ++count;
         head = head->next;
      }

      return count;
   }
}