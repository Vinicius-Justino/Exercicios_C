#include <stdio.h>
#include <stdlib.h>

void main() {
    // Recebendo a base e o expoente
    int cont, base, expoente, resultado = 1;
    printf("Digite uma base: ");
    scanf("%d", &base);
    printf("Digite um expoente: ");
    scanf("%d", &expoente);

    // Calculando a potência
    if(expoente != 0) {
        for(cont = 1; cont <= expoente; cont++) {
            resultado = resultado*base;
        }

        printf("\n%d elevado a %d eh %d. \n\n", base, expoente, resultado);
    }else {
        printf("\n%d elevado a 0 eh 1. \n\n", base);
    }

    system("pause");
}
