#include <stdio.h>
#include <stdlib.h>

void main() {
    // Pega o tamanho da sequência
    int tamanho;
    printf("digite o tamanho da sequ%cncia que vai digitar: ", 136);
    scanf("%d", &tamanho);
    printf("\n");

    // Cria e enche a sequência
    int seq[tamanho], cont1, cont2;
    int numero;
    for(cont1 = 1; cont1 <= tamanho; cont1++) {
        printf("Digite um n%cmero: ", 163);
        scanf("%d", &numero);

        seq[cont1-1] = numero;
    }

    printf("\n");

    // Conta quantos números diferentes tem na sequência e vê quais são eles
    int n_diferentes = 0, numeros[tamanho], casa_livre = 0, diferente;
    for(cont1 = 0; cont1 < tamanho; cont1++) {
        diferente = 1;

        for(cont2 = 0; cont2 < tamanho; cont2++) {
            if(seq[cont1] == numeros[cont2]) {
                diferente = 0;
                break;
            }
        }

        if(diferente) {
            n_diferentes++;
            numeros[casa_livre] = seq[cont1];
            casa_livre++;
        }
    }

    /* Percorre a sequência de números procurando por número iguais aos números
    diferentes e mostrando quantas vezes cada um aparece */
    int quantidade;
    for(cont1 = 0; cont1 < n_diferentes; cont1++) {
        quantidade = 0;
        for(cont2 = 0; cont2 < tamanho; cont2++) {
            if(seq[cont2] == numeros[cont1]) {
                quantidade++;
            }
        }

        printf("O n%cmero %d aparece %d vezes na sequ%cncia digitada. \n", 163, numeros[cont1], quantidade, 136);
    }

    printf("\n\n");

    system("pause");
}
