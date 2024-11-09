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

    // Organiza eles em ordem decrescente
    int maior, meio, menor;

    if(n1 > n2) {
        maior = n1;
        meio = n3;
        menor = n2;
    }else {
        maior = n2;
        meio = n3;
        menor = n1;
    }

    if(menor > n3) {
        meio = menor;
        menor = n3;
    }else if(maior < n3) {
        meio = maior;
        maior = n3;
    }

    // Mostrando eles na tela
    printf("\nOs numeros que voce digitou em ordem decrescente sao: %d, %d e %d. \n\n", maior, meio, menor);

    system("pause");
}
