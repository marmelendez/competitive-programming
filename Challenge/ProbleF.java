package Challenge;


public class ProbleF {

    class Node {
        int data;
        Node left;
        Node right;

        Node(int data) {
            this.data = data;
        }
     }

    boolean isBST(Node root, int minVal, int maxVal) {
        if (root == null) {
            return true;
        }
        boolean left,
                right;
        if (minVal >= root.data || root.data >= maxVal ) {
            return false;
        } else {
            left = isBST(root.left, minVal, root.data);
            right = isBST(root.right, root.data, maxVal);
            return left & right;
        }
    }
    
    boolean checkBST(Node root) {
        return isBST(root, 0, Integer.MAX_VALUE);
    }
    public static void main(String[] args) {
        ProbleF res = new ProbleF();
        Node root = new Node(5);
        root.left = new Node(3);
        root.right = new Node(8);
        root.left.left = new Node(2);
        root.left.right = new Node(4);
        root.right.left = new Node(7);
        root.right.right = new Node(2);
        System.out.println(res.isBST(root));
    }    
}
