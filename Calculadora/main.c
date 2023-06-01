#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero1, numero2;
    char operacao;
    printf("--Calculadora--\n");

    printf("Digite o primeiro numero:\n");
    scanf("%f", &numero1);

    printf("Digite o segundo numero:\n");
    scanf("%f", &numero2);

    printf("Digite o caractere correspondente a operacao que sera executada: \n+(adicao) \n-(subtracao) \n*(multiplicacao) \n/(divisao):\n");
    scanf("%c", &operacao);

    printf("A operacao selecionada foi: %c", operacao);
    return 0;
}
