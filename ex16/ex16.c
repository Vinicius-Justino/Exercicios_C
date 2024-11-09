#include <stdio.h>
#include <stdlib.h>

void main() {
    // Pegando as notas de um aluno
    float nota1, nota2;
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);

    // Calculando a media e dizendo se o aluno passou ou não
    float media = (nota1 + nota2)/2;

    if(media == 10) {
        printf("\nAprovado com distincao! \n\n");
    }else if(media >= 7) {
        printf("\nAprovado. \n\n");
    }else {
        printf("\nReprovado. \n\n");
    }

    system("pause");
}
