#include <stdio.h>
#include <stdlib.h>

void main() {
    // Criando as vari�veis
    int cont;
    float numero, media, soma = 0;

    // Recebendo 5 n�meros
    for(cont = 1; cont <= 5; cont++) {
        printf("Digite um numero: ");
        scanf("%f", &numero);

        // Somando todos eles
        soma = soma + numero;
    }

    // Determinando a m�dia entre eles
    media = soma/5;

    // Mostrando a soma e a m�dia na tela
    printf("\nA soma dos numeros que voce digitou eh %.1f e a media entre eles eh %.1f. \n\n", soma, media);

    system("pause");
}
