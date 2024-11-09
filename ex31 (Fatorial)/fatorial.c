#include <stdio.h>
#include <stdlib.h>

void main() {
    // Recebe um numero do usuario
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("\n");

    // Calculando o fatorial
    if(numero != 0) {
        int aux = numero;
        long int resultado = numero;
        while(aux != 1) {
            aux--;
            printf("%d x %d = %d \n", resultado, aux, resultado*aux);
            resultado = resultado*aux;
        }

        printf("\n%d! = %d. \n\n", numero, resultado);
    }else {
        printf("\n%d! = 1. \n\n", numero);
    }

    system("pause");
}
