#include <stdio.h>
#include <stdlib.h>

void main() {
    // Vendo até que número o usuário quer que a sequência vá
    int limite;
    printf("Digite quantos numeros quer que a sequencia tenha: ");
    scanf("%d", &limite);

    // Fazendo a sequencia
    int cont, n1 = 0, n2 = 1, n3 = n1+n2;
    printf("\n%d, %d, %d, ", n1, n2, n3);
    for(cont = 1; cont <= limite; cont++) {
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;

        printf("%d, ", n3);
    }

    printf("... \n\n");


    system("pause");
}
