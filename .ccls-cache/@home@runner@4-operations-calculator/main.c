#include <stdio.h>

int main() {
    char operacao;
    float num1, num2, resultado;
    int opcao;

    do {
        printf("Digite a operacao desejada (+, -, *, /): ");
        scanf(" %c", &operacao);

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);

        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        switch (operacao) {
            case '+':
                resultado = num1 + num2;
                break;
            case '-':
                resultado = num1 - num2;
                break;
            case '*':
                resultado = num1 * num2;
                break;
            case '/':
                resultado = num1 / num2;
                break;
            default:
                printf("Operacao invalida!\n");
                continue; // volta para o início do loop
        }

        printf("Resultado: %.2f\n", resultado);
        
        printf("\nDigite 1 para recomecar ou 0 para encerrar: ");
        scanf("%d", &opcao);
    } while (opcao == 1);

    printf("Encerrando a calculadora...\n");
    
    return 0;
}
