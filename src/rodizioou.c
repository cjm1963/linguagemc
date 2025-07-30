#include <stdio.h>
int main(){
    int placa;
    printf("digite o numero final da placa do veiculo\n");
    scanf("%d" ,&placa);
    if( placa == 1 || placa == 2 ){
        printf("rodizio de segunda-feira\n");
    }
    else if( placa == 3 || placa == 4 ){
        printf("rodizio de terça-feira\n");
    }
    else if( placa == 5 || placa == 6 ){
        printf("rodizio de quarta-feira\n");
    }
    else if( placa == 7 || placa == 8 ){
        printf("rodizio de quinta-feria\n");
    }
    else if( placa == 9 || placa == 0 ){
        printf("rodizio de sexta-feira\n");
    }
    else{
        printf("final de placa invalida\n");
    }
    return 0;
}