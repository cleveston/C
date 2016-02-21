#include<stdio.h>

void main() {
    
    float a, b, area;

    printf("Digite a base do triangulo(metros): ");
    scanf("%f", &a);
    printf("\nDigite a altura do triangulo(metros): ");
    scanf("%f", &b);
    area = ((b * a) / 2);

    printf("\nA area do triangulo e: %.2f metros\n", area);

}
