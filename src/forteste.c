#include <stdio.h>
#include <stdlib.h>
int main(){
    system("clear");
    int i , num;
    printf("Digite dois numeros entre 1 e 100\n");
    scanf("%d",&num);
    for(i = 1 ; i <= 100 ; i++){
        if(i % 2 == 0){
            printf("%d x %d\n" ,num ,i, (num*i));
        }
        return 0;

    }
}