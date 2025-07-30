#include <stdio.h>
int main() {
    int pontuacao = 85;
    char conceito;
    if (pontuacao >= 90) { // Primeira condição
        conceito = 'A';
    } else if (pontuacao >= 80) { // Segunda condição, só avaliada se a primeira for falsa
         conceito = 'B';
    } else if (pontuacao >= 70) { // Terceira condição, só avaliada se as anteriores forem falsas
        conceito = 'C';
    } else if (pontuacao >= 60) { // quarta condição
        conceito = 'D';
    } else { //se nenhuma das condições acima for verdadeira
        conceito ='F';
    }
    printf("Pontuação: %d -> Conceito: %c\n" , pontuacao, conceito);
    return 0;
}