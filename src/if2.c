#include <stdio.h>
int main(){
    int opcao;
    printf("Selecione uma opção:\n");
    printf("1. ver saldo\n");
    printf("2. fazer saque\n");
    printf("3. fazer deposito\n");
    printf("4. sair\n");
    printf("digite sua opção:");
    scanf("%d",&opcao); // Lê a opção do usuario
    if(opcao == 1){
        printf("voce escolheu 'ver o saldo' .\n");
        // Logica para ver saldo
    } else if (opcao == 2) {
        printf("voce escolheu 'fazer saque' .\n");
        // logica para fazer saque
    } else if (opcao == 3) {
        printf("voce escolheu 'fazer deposito' .\n");
        // logica para fazer deposito
    } else if (opcao == 4) {
        printf("saindo do programa. ate mais!\n");
    } else {
        printf("opção invalida. por favor, escolha um numero entre 1 e 4. \n");
    }
    return 0;
}