#include <stdio.h>
#include <stdlib.h>

void main() {
    // Criando a vari�vel pre�o
    float preco, desconto;

    // Perguntado o pre�o do produto ao usu�rio
    printf("Digite o valor de um produto: RS ");
    scanf("%f", &preco);

    // Perguntando o valor do desconto
    printf("Digite o valor do desconto: ");
    scanf("%f", &desconto);

    // Mostrando esse pre�o com o de desconto
    printf("\nO valor RS%.2f com %.1f por cento de desconto eh RS%.2f. \n\n", preco, desconto, preco-preco/100*desconto);

    system("pause");
}
