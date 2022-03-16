public class Caneta {
 String modelo;
 String cor;
 double ponta;
 int carga;
 final int CARGA_MAXIMA = 100;

 void escrever(String texto) {
  System.out.println(texto);
 }

 void iniciarCaneta(String modelo, String cor, double ponta) {
  this.modelo = modelo;
  this.cor = cor;
  this.ponta = ponta;
  this.carga = CARGA_MAXIMA;
 }
}