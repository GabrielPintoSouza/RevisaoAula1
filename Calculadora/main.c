#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;
    char operacao;
    printf("--Calculadora--\n");

    printf("Digite o caractere correspondente a operacao que sera executada: \n+(adicao) \n-(subtracao) \n*(multiplicacao) \n/(divisao):\n");
    scanf("%c", &operacao);

    printf("Digite o primeiro numero:\n");
    scanf("%d", &numero1);

    printf("Digite o segundo numero:\n");
    scanf("%d", &numero2);

    printf("A operacao selecionada foi: %c", operacao);
    return 0;
}
