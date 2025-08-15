#include <stdio.h>
#include <stdlib.h>
#include "../lib/criararquivo.h"

//vamos criar uma estrutura (struct) que
//representa o cliente, com seus respectivos dados.
struct cadastrocliente{
    char nome[100];
    char email[100];
    int idade;
};


int main(){ 

    system("clear");
    //vamos definir uma variavel do tipo struct de cliente
    //assim podemos acessar as propriedades da estrutura cliente
    struct cadastrocliente cli;
    //scanf("%s",cli.nome);
    printf("Digite o nome do cliente: \n");
    fgets(cli.nome,sizeof(cli.nome),stdin);
    printf("digite o email do cliente: \n");
    fgets(cli.email,sizeof(cli.email),stdin);
    printf("Digite a idade do cliente: \n");
    scanf("%d",&cli.idade);
    printf("%s - %s - %d anos\n",cli.nome, cli.email, cli.idade);

    return 0;

 };
    
    

