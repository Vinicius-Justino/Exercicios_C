#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    // Pega o tamanho das duas sequências
    int tamanho;
    printf("Digite o tamanho das sequ%cncias: ", 136);
    scanf("%d", &tamanho);
    printf("\n");

    // Cria as sequências
    char seq1[tamanho+1], seq2[tamanho+1], algarismo;
    int cont;
    // Enche a sequência 1
    for(cont = 1; cont <= tamanho; cont++) {
        printf("Digite o %d%c n%cmero da sequ%cncia 1: ", cont, 248, 163, 136);
        scanf(" %c", &algarismo);

        seq1[cont-1] = algarismo;
    }
    printf("\n");
    // Enche a sequência 2
    for(cont = 1; cont <= tamanho; cont++) {
        printf("Digite o %d%c n%cmero da sequ%cncia 2: ", cont, 248, 163, 136);
        scanf(" %c", &algarismo);

        seq2[cont-1] = algarismo;
    }

    // Somando as duas sequências e mostrando o resultado na tela
    int n1 = atoi(seq1), n2 = atoi(seq2), n3 = n1 + n2;
    printf("\nSe fossemos tratar as duas sequ%cncias como n%cmeros inteiros, a soma seria %d. \n\n", 136, 163, n3);

    system("pause");
}
