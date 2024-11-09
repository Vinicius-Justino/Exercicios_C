#include <stdio.h>
#include <stdlib.h>

void main() {
    float n1, n2;

    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite outro numero: ");
    scanf("%f", &n2);

    if(n1 > n2) {
        printf("\nEntre esses numeros, o maior eh %.1f. \n\n", n1);
    }else if(n1 < n2) {
        printf("\nEntre esses numeros, o maior eh %.1f. \n\n", n2);
    }else {
        printf("\nEsses numeros sao iguais. \n\n");
    }

    system("pause");
}
