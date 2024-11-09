#include <stdio.h>
#include <stdlib.h>

void main() {
    // Recebe a letra do usuario
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    // Diz se é vogal ou não
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("\n%c eh uma vogal. \n\n", letra);
    }else {
        printf("\n%c eh uma consoante. \n\n", letra);
    }

    system("pause");
}
