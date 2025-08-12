#include <stdio.h>
#include <stdlib.h>
int main(){

    int valor  = 10;
    int *pvalor = &valor;
    printf("O valor de %d\n", valor);
    printf("O valor de %p\n",pvalor);
    printf("-----------------------------\n");
    printf("O numero da variavel é %d\n", valor);
    printf("O endereço da variavel valor é %p\n",&valor);
    printf("O numero contido no ponteiro é %d\n",*pvalor);
    printf("O endereço guardado no ponteiro é %p\n",pvalor);

    return 0;
}