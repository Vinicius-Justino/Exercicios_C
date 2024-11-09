#include <stdio.h>
#include <stdlib.h>

void main() {
    // Criando as variáveis de temperatura
    float celsius, fahrenheit;

    // Vendo a temperatura em Celsius
    printf("Digite um temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Convertendo e mostrando na tela
    fahrenheit = celsius*9/5 + 32;

    printf("%.1f em Celsius seria %.1f em Fahrenheit. \n\n", celsius, fahrenheit);

    system("pause");
}
