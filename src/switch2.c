#include <stdio.h>
#include <stdlib.h>
int main(){
    //chamar o comando system("clear")para limpar a tela do terminal
    system("clear");
    //criar variavel para guardar dois numeros para operações matematica
    //que podera ser: + - * ou/
    char ch;
    //criar variavel para guardar dois numerospara as operações matematicas
    int a, b;
    printf("digite uma opereção matematica:+,-,*,/\n");

    //vamos capturar o sinal digitado pelo usuario
    //ch. usaremos o comando getchar, que b=vem da biblioteca stdlib
    //caso voce queira usar o scanf, poderia  ser feito da seguinte forma:
    //scanf("%d",&ch);
    ch = getchar();
    printf("Digite dois numeros inteiros dando enter entre eles: \n");
    scanf("%d%d",&a,&b);
    switch(ch){
        case '+':{
            int c = a + b;
            printf("O resultado da soma é %d\n",c);

        }
        break;
        case'-':{
            int d = a - b;
            printf("O resultado da subtração é %d\n",d);
        }
        break;
        case '*':{
            int e = a * b;
            printf("o resultado da multiplicação é %d\n",e);
        }
        break;
        case '/':{
            int f = a / b;
            printf("o resultado da divisão é %d\n",f);
        }
        break;
        default : printf("não é operação.\n");
    }
    system("pause");
    return 0;}
