#include <stdio.h>
#include <stdlib.h>

void main() {
    // Recebendo dois n�meros
    int n1, n2;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite mais um numero: ");
    scanf("%d", &n2);

    // Definindo qual n�mero � o maior e qual n�mero � o menor
    int maior, menor;
    if(n1 > n2) {
        maior = n1;
        menor = n2;
    }else {
        maior = n2;
        menor = n1;
    }

    // Mostrando o intervalo entre o maior n�mero e o menor
    if(menor+1 != maior) {
        printf("\nOs numero entre %d e %d sao: ", menor, maior);
        for(menor = menor+1; menor < maior; menor++) {
            printf("%d  ", menor);
        }
    }else {
        printf("\nNao existem numeros naturais entre %d e %d.", menor, maior);
    }

    printf("\n\n");

    system("pause");
}
