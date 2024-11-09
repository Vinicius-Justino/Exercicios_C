#include <stdio.h>
#include <stdlib.h>

void main() {
    // Recebendo a quantidade de dinheiro que o usuario tem
    float dinheiro;
    printf("Quantos reias voce tem? \nRS ");
    scanf("%f", &dinheiro);

    // Calculando quantos litros de gasolina ele consegue comprar e quantos
    //quilômetros ele consegue percorrer
    int litros = dinheiro/5, distancia = litros*20;
    printf("\nCom RS%.2f voce consegue comprar %dl de gasolina e percorrer %dkm. \n\n", dinheiro, litros, distancia);

    system("pause");
}
