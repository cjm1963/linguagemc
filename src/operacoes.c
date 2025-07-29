/*este programa pede dois numeros e com eles realiza as quarto operações matematicas*/

#include <stdio.h>
int main(){
    int numero1, numero2;
    int soma, subtrair, dividir, multiplicar;
    printf ("Digite um numero e tecle enter\n");
    scanf("%d" ,&numero1);
    printf("digite outro numero e tecle enter\n");

    scanf("%d" ,&numero2);
    soma = numero1 + numero2;
    subtrair = numero1 - numero2;     
    dividir = numero1 / numero2;
    multiplicar = numero1 * numero2;

    printf("o resultado da soma é %d\n" ,soma);
    printf("o resultado da subtração é %d\n" ,subtrair);
    printf("o resultado da divisão é %d\n" ,dividir);
    printf("o resultado da multiplicação é %d\n" , multiplicar);
    return 0;
}