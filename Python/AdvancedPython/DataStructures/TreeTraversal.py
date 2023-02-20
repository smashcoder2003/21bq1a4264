class Node:
    def __init__(self, item):
        self.left = None
        self.right = None
        self.val = item
        def Inorder(root):
            if root:
                Inorder(root.left)
                print(str(root.val) + "-->", end='')
                inorder(root.right)
            def Preorder(root):
                if root:
                    print(str(root.val) + "")
