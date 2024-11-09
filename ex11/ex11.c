#include <stdio.h>
#include <stdlib.h>

void main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if(n > 0) {
        printf("Esse numero eh positivo. \n\n");
    }else if(n < 0) {
        printf("Esse numero eh negativo. \n\n");
    }else {
        printf("Esse numero eh zero. \n\n");
    }

    system("pause");
}
