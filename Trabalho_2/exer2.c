#include <stdio.h>

void main() {
    int t, o, c, y, q = 0;

menu:
    printf("1. Triângulo retângulo de largura e altura t.\n");
    printf("2. Triângulo lateral de largura t e altura 2t-1.\n");
    printf("3. Triângulo de altura t e largura 2t-1.\n\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &o);
    printf("\nDigite o valor de t: ");
    scanf("%d", &t);

    switch (o) {
        case 1: for (c; c <= t; c++, printf("\n")) for (y = 0; y < c; y++) printf("*");
            break;
        case 2: for (c; c <= 2 * t - 1; c++, q = c <= t, y = q ? 0: t * 2, printf("\n")) for (y; q ? y < c: y > c; q ? y++: y--) printf("*");
            break;
        case 3: for (c; c < t; c++, printf("\n")) for (y = 0; y < 2 * t - 1; y++) printf(y >= t - c - 1 && y < c + t ? "*": " ");
            break;
        default:goto menu;
    }

} 
