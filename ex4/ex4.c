#include <stdio.h>
#include <stdlib.h>

void main() {
    // Criando as varíaveis
    float real, valor_dolar, dolar;

    // Atribuindo um valar para a variável real
    printf("Quantos reais voce tem? \nRS ");
    scanf("%f", &real);

    // Vendo o valor do dolar
    printf("\nQuanto vale o dolar nesse momento? \nRS ");
    scanf("%f", &valor_dolar);

    //convertendo
    dolar = real/valor_dolar;

    // Mostrando a conversão
    if(dolar > 1) {
        printf("\nCom RS%.2f, voce pode comprar US%.2f dolares. \n\n", real, dolar);
    }else {
        printf("\nCom RS%.2f, voce pode comprar US%.2f dolar. \n\n", real, dolar);
    }

    system("pause");
}
