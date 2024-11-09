#include <stdio.h>
#include <stdlib.h>

void main() {
    char sexo;

    printf("Voce eh homem(m) ou mulher(f)? \n");
    scanf(" %c", &sexo);

    if(sexo == 'm') {
        printf("\nO seu sexo eh masculino. \n\n");
    }else if(sexo == 'f') {
        printf("\nO seu sexo eh feminino. \n\n");
    }else {
        printf("\nSexo invalido. \n\n");
    }

    system("pause");
}
