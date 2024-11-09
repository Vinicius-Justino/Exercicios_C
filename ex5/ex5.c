#include <stdio.h>
#include <stdlib.h>

void main() {
    // Criando as variáveis
    float largura, altura;

    // Pegando a largura e a altura da parede
    printf("Largura da parede: ");
    scanf("%f", &largura);
    printf("Altura da parede: ");
    scanf("%f", &altura);

    // Medindo a tamanho da parede e falando a quantidade de tinta necessária
    printf("\nEssa parede tem a dimensao de %.2fx%.2f e sua area eh de %.3f metros quadrados.", largura, altura, largura*altura);
    printf("Para pintar essa parede voce vai precisar de %.3f litros de tinta. \n\n", largura*altura/2);
    system("pause");
}
