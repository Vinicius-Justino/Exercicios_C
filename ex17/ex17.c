#include <stdio.h>
#include <stdlib.h>

void main() {
    // Recebendo os tr�s n�meros
    int n1, n2, n3;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &n2);
    printf("Digite um ultimo numero inteiro: ");
    scanf("%d", &n3);

    // Vendo qual dos tr�s � maior
    int maior;
    if(n1 > n2) {
        maior = n1;
    }else {
        maior = n2;
    }
    if(maior < n3) {
        maior = n3;
    }

    // Mostrando o maior n�mero na tela
    printf("\nDe todos os numeros que voce digitou, o maior foi %d. \n\n", maior);

    system("pause");
}
