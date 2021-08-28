class Node:
    def __init__(self,data):
        self.value = data
        self.distance = 0
        self.left = None
        self.right = None  

def topView(root):
    if (root != None):
        distance = 0
        root.distance = distance
        topNodes = dict()

        nodes = []
        nodes.append(root)
    
        while(len(nodes)):
            root = nodes[0]
            distance = root.distance
    
            if distance not in topNodes:
                topNodes[distance] = root.value
            
            if(root.right):
                nodes.append(root.right)
                root.right.distance = distance + 1

            if(root.left):
                nodes.append(root.left)
                root.left.distance = distance - 1
    
            nodes.pop(0)

        for i in sorted(topNodes):
            print(str(topNodes[i]), end = " ")   
    return  

def main():
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.right = Node(4)
    root.left.right.right = Node(5)
    root.left.right.right.right = Node(6)
    topView(root)

main()





    