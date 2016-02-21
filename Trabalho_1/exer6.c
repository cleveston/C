#include<stdio.h>

int main() {

    int unidade;
    float temperatura;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);
    printf("\nDigite a unidade de medida\n1 - Celcius\n2 - Farenheit\n");
    scanf("%d", &unidade);

    if (unidade == 1) {
        printf("\nTemperatura: %f Farenheit\n", (temperatura * 9 / 5) + 32);
    } else if (unidade == 2) {
        printf("\nTemperatura: %f Celcius\n", (temperatura - 32)* 5 / 9);
    } else {
        printf("\nOpcao invalida\n");
    }
}


