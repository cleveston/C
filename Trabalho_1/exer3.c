#include <stdio.h>

int main() {

    float a, b, c;
    printf("Digite os lados do triangulo(A/B/C): ");
    scanf("%f %f %f", &a, &b, &c);
    
    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        if (a == b && a == c) {
            printf("\nO triangulo e equilatero\n");
        } else if (a == b || a == c || c == b) {
            printf("\nO triangulo e isosceles\n");
        } else {
            printf("\nO triangulo e escaleno\n");
        }
    } else {
        printf("\nLados informados nao formam um triangulo\n");
    }
}

