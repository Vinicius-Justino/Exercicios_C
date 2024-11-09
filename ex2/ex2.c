#include <stdio.h>
#include <stdlib.h>

void main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("%d, %d, %d \n\n", numero-1, numero, numero+1);

    system("pause");
}
