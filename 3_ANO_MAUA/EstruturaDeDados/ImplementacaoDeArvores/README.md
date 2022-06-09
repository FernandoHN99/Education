## Getting Started

ret_Root(): retorna o node root da árvore 
parent(): retorna o pai do nó
imprime_Parent(): imprime o dado armazenado no pai 
children(): retorna lista com os filhos do nó 
imprime_Filhos(): Imprime dados dos filhos do nó 
isInternal(): testa se nó é node interno 
isExternal(): testa se nó é node 
externo size(): retorna o número de nodes na árvore 
isEmpty(): testa se a árvore é vazia 
dept(): retorna o número de ancestrais do node 
height(): retorna a altura do node 
preorder(): retorna nodes em ordem preorder 
postorder(): retorna nodes em ordem postorder 
listNodes(): retorna uma coleção dos nodes da árvore
replace(v,e): altera o dado em um determinado node.

<!-- public class Teste_Tree { 
    public static void main(String[] args ) {

        Tree x = new Tree(); 
        x.insert_root(0);

        Node_Tree no_1 = new Node_Tree(1); 
        Node_Tree no_2 = new Node_Tree(2); 
        Node_Tree no_3 = new Node_Tree(3); 
        Node_Tree no_4 = new Node_Tree(4);
        Node_Tree no_5 = new Node_Tree(5);

        x.root.firstChild = no_1; 
        no_1.parent = x.root; 
        no_1.next = no_2;
        no_2.parent = x.root; 
        no_2.next = no_3;
        no_3.parent = x.root;
        no_2.firstChild = no_4; 
        no_4.parent = no_2;
        no_4.next = no_5;
        no_5.parent = no_2;

        x.root.posorder(); 
    }
} -->

<!-- public class Teste_Tree { 
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
        x.root.preorder();
      
    }
} -->

## Folder Structure

The workspace contains two folders by default, where:

- `src`: the folder to maintain sources
- `lib`: the folder to maintain dependencies

Meanwhile, the compiled output files will be generated in the `bin` folder by default.

> If you want to customize the folder structure, open `.vscode/settings.json` and update the related settings there.

## Dependency Management

The `JAVA PROJECTS` view allows you to manage your dependencies. More details can be found [here](https://github.com/microsoft/vscode-java-dependency#manage-dependencies).
