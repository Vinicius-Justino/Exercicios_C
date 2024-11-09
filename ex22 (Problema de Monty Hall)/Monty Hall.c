#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    // Coloca o prêmio atrás de uma das portas
    srand((unsigned)time(NULL));
    int porta_premiada = (rand()%3)+1;

    // Mostra as portas para o candidato
    printf("Escolha uma das 3 portas a seguir e tente ganhar um premio! \n\n");
    printf("    1        2       3 \n");
    printf("   ____     ____    ____ \n");
    printf("  |    |   |    |  |    | \n");
    printf("  |   *|   |   *|  |   *| \n");
    printf("  |____|   |____|  |____| \n\n");

    // Pergunta em qual porta o usuario acha que está o prêmio
    int porta_escolhida;
    printf("Em qual porta voce acha que esta o premio? \n");
    scanf("%d", &porta_escolhida);

    // Abre uma porta errada
    int porta_abrir = porta_escolhida;
    while(porta_abrir == porta_escolhida || porta_abrir == porta_premiada) {
        srand((unsigned)time(NULL));
        porta_abrir = (rand()%3)+1;
    }


    char troca;
    printf("\nO apresentador abriu a porta %d, e ela esta errada, agora ele vai abrir a sua, \ndeseja trocar para a outra? (\"s\" ou \"n\") \n", porta_abrir);
    scanf(" %c", &troca);

    if(porta_escolhida != porta_premiada) {
        switch(troca) {
            case 's':
                printf("\nA porta %d estava errada, voce ganhou! \n\n", porta_escolhida);
                break;
            case 'n':
                printf("\nA porta %d estava errada, voce perdeu. \n\n", porta_escolhida);
                break;
        }
    }else if(porta_escolhida == porta_premiada) {
        switch(troca) {
            case 's':
                printf("\nA porta %d estava correta, voce perdeu. \n\n", porta_escolhida);
                break;
            case 'n':
                printf("\nA porta %d estava correta, voce ganhou! \n\n", porta_escolhida);
                break;
        }
    }

    system("pause");
}
