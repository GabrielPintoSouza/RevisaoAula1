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

    printf("Primeiro digito: %f ", numero1);
    printf("Segundo digito: %f", numero2);


    return 0;
}
