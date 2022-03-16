import java.io.IOException;

public class App {
    public static void main(String[] args) {
        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
        Caneta c1 = new Caneta();
        c1.modelo = "BIC";
        c1.cor = "Azul";
        c1.carga = 100;
        c1.ponta = 1.0;
        System.out.println("c1.modelo: " + c1.modelo);
        System.out.println("c1.ponta: " + c1.ponta);
        System.out.println("c1.carga: " + c1.carga);
        System.out.println("c1.cor: " + c1.cor);

    }
}
