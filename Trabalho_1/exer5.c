#include <stdio.h>

void main() {

    int a, b, c, maior, medio, menor;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &b);

    printf("\nDigite o terceiro numero: ");
    scanf("%d", &c);

    maior = a;
    medio = a;
    menor = a;

    if (maior < b && b > c) {
        maior = b;
        if (a > c) {
            medio = a;
            menor = c;
        } else {
            medio = c;
            menor = a;
        }
    } else if (maior < c) {
        maior = c;
        if (b > a) {
            medio = b;
            menor = a;
        } else {
            medio = a;
            menor = b;
        }
    } else {
        if (b > c) {
            medio = b;
            menor = c;
        } else {
            medio = c;
            menor = b;
        }
    }


    printf("Em ordem decrescente: %d, %d, %d\n", maior, medio, menor);

}
