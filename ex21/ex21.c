#include <stdio.h>
#include <stdlib.h>

void main() {
    // Recebe o número do usuário
    int dia;
    printf("Digite um numero entre 1 e 7: ");
    scanf("%d", &dia);

    // Mostra o dia da semana correspondente a esse numero
    switch(dia) {
        case 1:
            printf("\nO dia da semana correspondente a esse numero eh Domingo. \n\n");
            break;
        case 2:
            printf("\nO dia da semana correspondente a esse numero eh Segunda-Feira. \n\n");
            break;
        case 3:
            printf("\nO dia da semana correspondente a esse numero eh Terca-Feira. \n\n");
            break;
        case 4:
            printf("\nO dia da semana correspondente a esse numero eh Quarta-feira. \n\n");
            break;
        case 5:
            printf("\nO dia da semana correspondente a esse numero eh Quinta-Feira. \n\n");
            break;
        case 6:
            printf("\nO dia da semana correspondente a esse numero eh Sexta-Feira. \n\n");
            break;
        case 7:
            printf("\nO dia da semana correspondente a esse numero eh Sabado. \n\n");
            break;
        default:
            printf("\nNao existe nenhum dia da semana correspondente a esse numero. \n\n");
    }

    system("pause");
}
