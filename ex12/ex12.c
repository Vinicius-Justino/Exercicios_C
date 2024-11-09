#include <stdio.h>
#include <stdlib.h>

void main() {
    // Recebendo o valor do raio do círculo
    float raio;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    // Calculando a área e o perímetro e mostrando na tela
    float pi = 3.14, area = pi*(raio*raio), perimetro = (2*pi)*raio;
    printf("\nA area desse circulo eh %.2f e o perimetro eh %.2f. \n\n", area, perimetro);


    system("pause");
}
