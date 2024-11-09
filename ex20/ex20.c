#include <stdio.h>
#include <stdlib.h>

void main() {
    // Recebe o turno em que uma pessoa estuda
    char turno;
    printf("Voce estuda cedo(c), a tarde(t) ou a noite(n)? \n");
    scanf(" %c", &turno);

    switch(turno) {
        case 'c':
            printf("Bom dia! \n\n");
            break;
        case 't':
            printf("Boa tarde! \n\n");
            break;
        case 'n':
            printf("Boa noite! \n\n");
            break;
        default:
            printf("Entrada invalida. \n\n");
            break;
    }


    system("pause");
}
