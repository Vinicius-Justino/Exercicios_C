#include <stdio.h>
#include <stdlib.h>

void main() {
    char usuario[30], senha[30];

    do {
        printf("Escolha um nome de usuario: ");
        scanf(" %s", &usuario);
        printf("Escolha uma senha: ");
        scanf(" %s", &senha);

        if(strcmp(usuario, senha) != 1) {
            printf("\nA senha nao pode ser igual ao seu nome de usuario, tente novamente. \n\n\n");
        }
    }while(strcmp(usuario, senha) != 1);

    printf("\nMuito obrigado! \n\n");

    system("pause");
}
