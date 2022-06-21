import java.security.SecureRandomParameters;

import javax.swing.plaf.synth.SynthScrollBarUI;

public class Node_Tree {
    Integer item; 
    Node_Tree parent; 
    Node_Tree firstChild; 
    Node_Tree next;

    public Node_Tree(Integer item) { 
        this.item = item; 
        this.parent = null; 
        this.firstChild = null; 
        this.next = null;
        Tree.size+=1;
    }

    public Node_Tree Pai() { 
        return this.parent;
    }

    public void imprime_Pai(){ 
        if (this.parent != null) 
            System.out.println("Pai: " + this.parent.item );
        else 
            System.out.println("Este nó é root, não tem pai...");
    }


    public void imprimeFilhos() { 
        if (this.firstChild == null) 
            System.out.println("Nó nao tem filhos....");
        else {
            Node_Tree trab = this.firstChild; 
            while (trab != null) {
                System.out.println(trab.item); 
                trab = trab.next;
            }  
        }
    }
        
    public void imprimeFilhosFolhas(){ 
        Boolean aux = false;
        Node_Tree trab = this.firstChild; 
        while(trab != null){
            if(!trab.EhInterno()){
                aux = true;
                System.out.println(trab.item); 
            }
            trab = trab.next;
        }
        if(!aux)
            System.out.println("Nó nao tem filhos folhas....");
    }

    public boolean EhInterno() { 
        if (this.firstChild != null) 
            return true;
        else 
            return false;
    }

    public int dept() { 
        if (this.parent == null) 
            return 0;
        else 
            return (1 + this.parent.dept());
        }
    
    public int height() { 
        if (this.firstChild == null ) 
            return 0;

        int h=0; 
        Node_Tree trab = this.firstChild;
        while(trab.next != null ){ 
            h = Math.max(h , trab.next.height()); 
            trab = trab.next;
        } 
        return 1 + h;
    }

    public void preorder(){ 
        System.out.println(this.item);

        Node_Tree noFilho = this.firstChild;
        while(noFilho != null){ 
            noFilho.preorder(); 
            noFilho = null;
        }
        if(this.next != null){
            this.next.preorder();
        }
    }

    // public void posorder(){ 
    //     System.out.println(this.item);
    //     if(this.Pai() != null && this.parent != ){
    //         this.parent.posorder();
    //     }
    //     Node_Tree noIrmao = this.next;
    //     while(noIrmao != null){
    //         noIrmao = noIrmao.firstChild;
    //         noIrmao.posorder(); 
    //     }

    // }

    public int preorderMedia(int soma){
        soma += this.item;
        Node_Tree noFilho = this.firstChild;
        while(noFilho != null){ 
            soma = noFilho.preorderMedia(soma); 
            noFilho = null;
        }
        if(this.next != null){
            soma = this.next.preorderMedia(soma);
        }
        return soma;
    }
    

    public Node_Tree getParent() {
        return parent;
    }
}