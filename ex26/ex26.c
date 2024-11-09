#include <stdio.h>
#include <stdlib.h>

void main() {
    // Criando as variáveis
    int cont;
    float numero, maior;

    // Recebendo 5 números
    for(cont = 1; cont <= 5; cont++) {
        printf("Digite um numero: ");
        scanf("%f", &numero);

        // Determinando o maior deles
        if(numero > maior) {
            maior = numero;
        }
    }

    // Mostrando o maior na tela
    printf("\nDe todos os numero que voce digitou, o maior foi %.1f. \n\n", maior);

    system("pause");
}
