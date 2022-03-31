public class Transacoes{

    public static String gerarQRCode(String idConta, String nome, double valorTransacao ){
        return ("idConta" + ";" + nome + ";" + String.valueOf(valorTransacao));
    }

    // public boolean realizarPagamento(double valor, Conta destino){
    //     if(!sacar(valor)) return false;
    //     if(!destino.depositar(valor)) return false;
    //     return true;
    // }

    // public boolean transferirDinheiro(double valor, Conta destino){
    //     if(!sacar(valor)) return false;
    //     if(!destino.depositar(valor)) return false;
    //     return true;
    
    }



}
