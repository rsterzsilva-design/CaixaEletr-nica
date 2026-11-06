#include <stdio.h>

int main() {
    int opcao;
    int saldo = 10000; // Saldo inicial predefinido para testes
    int valorsaque, valorrestante;
    int n100, n50, n20, n10, n5;

    do {
        printf("\n=== CAIXA ELETRONICO ===\n");
        printf("1. Consultar Saldo\n");
        printf("2. Sacar Dinheiro\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\nSeu saldo atual e: R$ %d\n", saldo);
                break;
                
            case 2:
                printf("\nDigite o valor do saque (apenas multiplos de 5): R$ ");
                scanf("%d", &valorsaque);

                // Validações do saque
                if (valorsaque <= 0) {
                    printf("Erro: Valor invalido.\n");
                } else if (valorsaque % 5 != 0) {
                    printf("Erro: O valor deve ser multiplo de 5.\n");
                } else if (valorsaque > saldo) {
                    printf("Erro: Saldo insuficiente!\n");
                } else {
                    // Deduz o valor do saldo
                    saldo -= valorsaque;
                    valorrestante = valorsaque;

                    // Cálculo da quantidade de cada nota
                    n100 = valorrestante / 100;
                    valorrestante %= 100;

                    n50 = valorrestante / 50;
                    valorrestante %= 50;

                    n20 = valorrestante / 20;
                    valorrestante %= 20;

                    n10 = valorrestante / 10;
                    valorrestante %= 10;

                    n5 = valorrestante / 5;
                    valorrestante %= 5;

                    // Exibição do resultado
                    printf("\nSaque de R$ %d realizado com sucesso!\n", valorsaque);
                    printf("Notas entregues:\n");
                    if (n100 > 0) printf("%d nota(s) de R$ 100\n", n100);
                    if (n50 > 0)  printf("%d nota(s) de R$ 50\n", n50);
                    if (n20 > 0)  printf("%d nota(s) de R$ 20\n", n20);
                    if (n10 > 0)  printf("%d nota(s) de R$ 10\n", n10);
                    if (n5 > 0)   printf("%d nota(s) de R$ 5\n", n5);
                }
                break;
                
            case 3:
                printf("\nSaindo... Obrigado por utilizar nosso caixa!\n");
                break;
                
            default:
                printf("\nOpcao invalida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
