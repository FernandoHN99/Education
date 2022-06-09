public class Teste_Tree { 
    public static void main(String[] args ) {

        Tree x = new Tree(); 
        x.insert_root(0);

        Node_Tree no_1 = new Node_Tree(1); 
        Node_Tree no_2 = new Node_Tree(2); 
        Node_Tree no_3 = new Node_Tree(3); 
        Node_Tree no_4 = new Node_Tree(4);
        Node_Tree no_5 = new Node_Tree(5);
        Node_Tree no_6 = new Node_Tree(6); 
        Node_Tree no_7 = new Node_Tree(7); 
        Node_Tree no_8 = new Node_Tree(8); 
        Node_Tree no_9 = new Node_Tree(9); 
        Node_Tree no_10 = new Node_Tree(10); 
        Node_Tree no_11 = new Node_Tree(11);

        x.root.firstChild = no_1;

        no_1.parent = x.root; 
        no_1.next = no_5;
        no_5.next = no_8; 
        no_5.parent = x.root; 
        no_8.parent = x.root;

        no_1.firstChild = no_2; 
        no_2.next = no_3; 
        no_3.next = no_4; 
        no_2.parent = no_1; 
        no_3.parent = no_1; 
        no_4.parent = no_1;

        no_5.firstChild=no_6; 
        no_6.next = no_7; 
        no_6.parent = no_5; 
        no_7.parent = no_5;

        no_8.firstChild = no_9; 
        no_9.next = no_10; 
        no_10.next = no_11; 
        no_9.parent = no_8;
        no_10.parent = no_8; 
        no_11.parent = no_8;

        x.root.posorder();
      
    }
}