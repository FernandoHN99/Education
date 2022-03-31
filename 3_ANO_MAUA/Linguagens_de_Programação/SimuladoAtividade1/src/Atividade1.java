public class Atividade1 {

    public void run(){
        Usuario user1 = new Usuario("Fernando", "fernandoHenriques@gmail.com", "fernando123");
        Conta conta1 = new Conta("#1234", user1);
        conta1.depositar(200);
        System.out.println("Saldo Conta1: "+ conta1.visualizarSaldo());

        Usuario user2 = new Usuario("Sandra", "sandraHenriques@gmail.com", "sandra123");
        Conta conta2 = new Conta("#1234", user2);
        conta2.depositar(100);
        System.out.println("Saldo Conta2: "+ conta2.visualizarSaldo());

        
        String transacao = Transacoes.gerarQRCode(conta2.getIdConta() , conta2.getUser().getNome(), 200);
        System.out.println("QRCode Conta2: " + transacao);
    }

    public boolean realizarPagamento(){
        return true;
    }
}
