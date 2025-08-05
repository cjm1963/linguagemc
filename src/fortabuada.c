#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int i , inicial, final;
    printf("Digite um numero para a tabuada\n");
    scanf("%d",&num);
    for(i = 1 ; i <= 10 ; i++){
        printf("%d x %d = %d\n",num,i,(num*i));
    }
    return 0;
}