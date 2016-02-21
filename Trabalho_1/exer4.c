#include <stdio.h>

void main() {

    int produto, pais;
    float preco, peso, total, precoImposto;

    printf("Digite o codigo do pais de origem (1, 2 ou 3): ");
    scanf("%d", &pais);

    printf("\nDigite o codigo do produto (1 a 10): ");
    scanf("%d", &produto);

    printf("\nDigite o peso do produto(Kg): ");
    scanf("%f", &peso);

    peso = peso * 1000;

    printf("\nO peso do produto e: %.2f gramas", peso);

    if (produto == 1 || produto == 2 || produto == 3 || produto == 4) {
        preco = (peso * 10);
    } else if (produto == 5 || produto == 6 || produto == 7) {
        preco = (peso * 25);
    } else if (produto == 8 || produto == 9 || produto == 10) {
        preco = (peso * 35);
    }

    printf("\nPreco do produto: %.2f reais", preco);

    if (pais == 1) {
        precoImposto = (preco * 0);
        preco = preco + precoImposto;
    } else if (pais == 2) {
        precoImposto = (preco * 0.15);
        preco = preco + precoImposto;
    } else if (pais == 3) {
        precoImposto = (preco * 0.25);
        preco = preco + precoImposto;
    }

    printf("\nO imposto cobrado sera de %.2f reais\n", precoImposto);
    printf("\nPreco total da compra: %.2f\n", preco);

}
