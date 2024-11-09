#include <stdio.h>
#include <stdlib.h>

void main() {
    // Recebe o número de lançamentos que o usuário
    int quantidade;
    printf("Quantas vezes pretende lan%car o dado: ", 135);
    scanf("%d", &quantidade);
    printf("\n");

    // Efetua os lançamentos
    int face, cont, resultados[quantidade];
    for(cont = 1; cont <= quantidade; cont++) {
        printf("Face do %d%c lan%camento: ", cont, 248, 135);
        scanf("%d", &face);

        resultados[cont-1] = face;
    }

    printf("\n");

    // Conta quantas vezes saíram cada face e mostra ao usário.
    int vezes = 0;
    for(face = 1; face <= 6;' face++) {
        for(cont = 0; cont < quantidade; cont++) {
            if(resultados[cont] == face) {
                vezes++;
            }
        }

        printf("A face %d saiu %d vezes.", face, vezes);
    }

    printf("\n\n");

    system("pause");
}
