class Node:
    def __init__(self,value):
        self.data = value
        self.distance = 0
        self.left = None
        self.right = None  

def isBinarySearchTree(root):
    if (root != None):
        if (root.right != None):
            if (root.data < root.right.data):
                return isBinarySearchTree(root.right)
            return False
        if (root.left != None):
            if (root.data > root.right.data):
                return isBinarySearchTree(root.left)
            return False
    return True

def main():
    root = Node(5)
    root.left = Node(2)
    root.right = Node(7)
    root.left.left = Node(1)
    root.left.right = Node(3)
    root.right.left = Node(4)
    root.right.right = Node(10)
    print(isBinarySearchTree(root))

main()
