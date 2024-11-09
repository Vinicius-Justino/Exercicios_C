#include <stdio.h>
#include <stdlib.h>

void main() {
    // Criando a variável número
    int numero;

    // Recebendo os números
    do {
        printf("Digite um numero entre 0 e 10: ");
        scanf("%d", &numero);

        if(!(0 < numero && numero <= 10)) {
            printf("\nNumero invalido. \n\n");
        }
    }while(0 <= numero && numero <= 10);

    system("pause");
}
