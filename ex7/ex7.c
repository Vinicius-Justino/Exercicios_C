#include <stdio.h>
#include <stdlib.h>

void main() {
    // Criando a variável salario
    float salario;

    // Recebendo o valor de salário
    printf("Digite o salario do funcionario: RS ");
    scanf("%f", &salario);

    // Mostrando o reajuste
    printf("\nEsse salario de RS%.2f com 15 por cento de aumento seria RS%.2f. \n\n", salario, salario-salario/100*15);

    system("pause");
}
