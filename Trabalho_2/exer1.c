#include <stdio.h>

int main() {

    int c, dinheiro, preco, troco = 0;
    int moeda[] = {100, 50, 25, 5, 1};
    int t[5] = {0};

    printf("Digite o preco do estacionamento(em centavos): ");
    scanf("%d", &preco);
    printf("\nDigite seu dinheiro: ");
    scanf("%d", &dinheiro);
    troco = dinheiro - preco;
    
    if (troco > 0) {
        printf("\nSeu troco e de: %d centavos", troco);

        while (troco) {
            if (troco >= moeda[c]) {
                troco = troco - moeda[c];
                t[c]++;
            } else c++;
        }

        for (c = 0; c <= 4; c++)
            if (t[c] > 0)
                printf("\nVoce recebera %d moeda%c de %d centavos", t[c], t[c] > 1 ? 's' : ' ', moeda[c]);

    } else printf("Dinheiro insuficiente\n");

    return 0;
}