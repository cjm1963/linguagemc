#include <stdio.h>
int main(){
    int valor = 15;
    if (valor < 0) {
        printf("O valor %d é negativo. \n" , valor);
    } else if (valor >= 0 && valor <= 10) { // verifica se o valor esta entre o e 10 (inclusive)
        printf("O valor >= %d esta entre 0 e 10. \n", valor);
    } else if (valor > 10 && valor <= 20) { // verifica se o valçor esta entre 11 e 20 (inclusive)
        printf(" O valor %d esta entre 11 e 20. \n" , valor);
    }  else { // Se não se encaixa em nenhuma das condições anteriores
          printf("O valor %d é maior que 20. \n" , valor);
    }
    return 0;
}  