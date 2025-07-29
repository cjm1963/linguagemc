#include <stdio.h>

int main(){
    int ano;

    printf("Digite um ano e tecle Enter");
    scanf("%d" ,&ano);

    if(ano % 4 == 0 ){
        printf("Este ano %d é bissexto\n" ,ano);
    }
    else{
        printf("este ano %d NÃO é bissexto\n" ,ano);

    }
    return 0;
}