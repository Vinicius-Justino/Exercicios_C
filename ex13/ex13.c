#include <stdio.h>
#include <stdlib.h>

void main() {
    // Recebendo a temperatura em Fahrenheit
    float fahrenheit;
    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convertendo e mostrando na tela
    float celsius = (fahrenheit-32)*0.55;
    printf("%.1f F seria %.1f C. \n\n", fahrenheit, celsius);


    system("pause");
}
