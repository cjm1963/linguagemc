#include <stdio.h>
#include <stdlib.h>
#include "../lib/funcao3.h"

int main(){
    system("clear");
    cabecalho();
    int p = potencia(5,4);
    float juros = jurossimples(500.00, 6.0);
    printf("O resultado da potencia é %d\n",p);
    printf("O resultado da de juros é %.2f\n",juros);
    separador();
    return 0;
}