#include <stdio.h>
#include <stdlib.h>

int main(){
    //vamos declarar a variavel que ira representar
    //o arquivo em tempo de execução.
    //Esta variavel deve ser declarada como
    //uma constante, pois o seu conteudo NUNCA
    //podera ser alterado. Uma vez alocado o
    //nome e caminho do arquivo, estes não poderão
    //mudar em tempo de execução para não perder a
    //localização do arquivo e sua posição de memoria.
    
    FILE *arquivo;

    //vamos definir onde o arquivo esta ou sera criado.
    //para isso iremos usar o comando
    //fopen(f-file=arquivo | open=abrir)
    //alem disso iremos definir o atributo de 
    //manipulação de arquivos,tais como:
    //r -> read(leitura)| w -> write(escrita)
    //a -> append(adição de texto) | pipe
    arquivo = fopen("files/texto.txt","a");

    //vamos escrever no arquivo
    fprintf(arquivo,"sexta-feira\n");

    //fechar o arquivo
    fclose(arquivo);
    printf("o arquivo foi criado\n");
    return 0;




}