#include <stdio.h>
#include <stdlib.h>

void main() {
    // Pega o tamanho de uma sequência de números para criá-la.
    int tamanho;
    printf("Digite quantos numeros quer escrever: ");
    scanf("%d",&tamanho);

    // Cria a sequência e recebe os seus números.
    int lista[tamanho], cont, numero;
    for(cont = 1; cont <= tamanho; cont++) {
        printf("Digite o %d%c numero: ", cont, 167);
        scanf("%d", &numero);

        lista[cont-1] = numero;
    }

    // Mostra essa sequência ao contrário.
    printf("\nOs n%cmeros que voc%c digitou em ordem inversa sao: %d", 163, 136, lista[tamanho-1]);

    for(cont = tamanho-2; cont >= 0; cont--) {
        printf(", %d", lista[cont]);
    }

    printf(". \n\n");

    system("pause");
}
