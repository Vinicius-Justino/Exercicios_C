#include <stdio.h>
#include <stdlib.h>

void main() {
    char nome[15];

    printf("Digite o seu primeiro nome: ");
    scanf("%s", &nome);

    printf("E um prazer te conhecer %s! \n\n", nome);

    system("pause");
}
