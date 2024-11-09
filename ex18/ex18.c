#include <stdio.h>
#include <stdlib.h>

void main() {
    // Recebe os 3 números
    int n1, n2, n3;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &n2);
    printf("Digite mais um numero inteiro: ");
    scanf("%d", &n3);

    // Vendo o menor e o maior
    int menor, maior;
    if(n1 > n2) {
        menor = n2;
        maior = n1;
    }else {
        menor = n1;
        maior = n2;
    }

    if(menor > n3) {
        menor = n3;
    }else if(maior < n3) {
        maior = n3;
    }

    // Mostrando o maior e o menor número na tela
    printf("\nDentre os numero que voce digitou o menor foi %d e o maior foi %d. \n\n", menor, maior);

    system("pause");
}
