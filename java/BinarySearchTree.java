package binarySearchTree;

public class Main {

	public static void main(String[] args) {
		BinarySearch a = new BinarySearch();
		a.insert(50);
		a.insert(30);
		a.insert(20);
		a.insert(40);
		a.insert(80);
		
		a.inorder();
		

	}

}

class BinarySearch{
	class Node{
		int key;
		Node left , right;
		public Node(int item) {
			key = item;
			left = right= null;
			
		}
	}
	Node root;
   BinarySearch(){
	   root = null;
   }
   
   
   void insert(int key) {
	   root = insertRec(root, key);
   }
   
   Node insertRec(Node root, int key) {
	   if(root == null) {
		   root = new Node(key);
		   return root;
		   
	   }
	   if(key < root.key)
		   root.left = insertRec(root.left,key);
	   else if(key >root.key) 
		   root.right = insertRec(root.right,key);
		   
		  return root;
	   
	   
	   
   }
   
   void inorder() {
	   inorderRec(root);
   }
   
   
   void inorderRec(Node root) {
	   
	   if(root != null) {
		   inorderRec(root.left);
		   	System.out.println(root.key);
		   	inorderRec(root.right);
	   }
	   
   }
   
}
