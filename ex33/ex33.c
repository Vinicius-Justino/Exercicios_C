#include <stdio.h>
#include <stdlib.h>

void main() {
    // Pega o gabarito de uma prova.
    int cont1, cont2;
    char gabarito[6], alternativa;
    for(cont1 = 1; cont1 <= 5; cont1++) {
        printf("Resposta da questao %d: ", cont1);
        scanf(" %c", &alternativa);

        gabarito[cont1-1] = alternativa;
    }

    // Vê quantos alunos tem em uma sala.
    int alunos;
    printf("\nQuantos alunos tem na sua turma? \n");
    scanf("%d", &alunos);

    // Recebe as respostas de cada um desses alunos.
    char respostas[6], resposta;
    int acertos;
    for(cont1 = 1; cont1 <= alunos; cont1++) {
        printf("\nAluno %d: \n\n", cont1);
        for(cont2 = 1; cont2 <= 5; cont2++) {
            printf("Resposta do aluno %d para a questao %d: ", cont1, cont2);
            scanf(" %c", &resposta);

            respostas[cont2-1] = resposta;
        }

        // Compara as respostas com o gabarito e vê quantas questões ele acertou.
        acertos = 0;
        for(cont2 = 0; cont2 <= 4; cont2++) {
            if(respostas[cont2] == gabarito[cont2]) {
                acertos++;
            }
        }

        // Mostra quantos acertos aquele aluno teve.
        printf("\nO aluno %d acertou %d questoes. \n", cont1, acertos);
    }

    printf("\n");

    system("pause");
}
