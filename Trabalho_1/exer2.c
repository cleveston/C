#include <stdio.h>

void main() {

    int codigo, aumento;
    float salario, novosalario;

    printf("|         Codigos        |\n");
    printf("| ---------------------- |\n");
    printf("|  1 - Escriturario      |\n");
    printf("|  2 - Secretario        |\n");
    printf("|  3 - Caixa             |\n");
    printf("|  4 - Gerente           |\n");
    printf("|  5 - Diretor           |\n");
    printf("| ---------------------- |\n");

    printf("Digite o codigo do funcionario: ");
    scanf("%d", &codigo);

    printf("\nDigite o salario atual do funcionario(R$): ");
    scanf("%f", &salario);

    if (codigo == 1) {
        novosalario = (salario + (salario * 50 / 100));
        printf("\nO cargo ocupado e Escriturario");
        aumento = 50;
    } else if (codigo == 2) {
        novosalario = (salario + (salario * 35 / 100));
        printf("\nO cargo ocupado e Secretario");
        aumento = 35;
    } else if (codigo == 3) {
        novosalario = (salario + (salario * 20 / 100));
        printf("\nO cargo ocupado e Caixa");
        aumento = 20;
    } else if (codigo == 4) {
        novosalario = (salario + (salario * 10 / 100));
        printf("\nO cargo ocupado e Gerente");
        aumento = 10;
    } else if (codigo == 5) {
        novosalario = salario;
        printf("\nO cargo ocupado e Diretor");
        aumento = 0;
    } else {
        printf("\nCódigo Incorreto");
        exit(0);
    }

    printf("\nO salario do funcionario e %.2f reais", salario);
    printf("\nO aumento sera de %d por cento", aumento);
    printf("\nO novo salario e: %.2f reais\n", novosalario);

}

