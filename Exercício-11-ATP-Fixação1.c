#include <stdio.h>

int main()
{
    float salario, salarioNovo, salarioAumento;
    printf("Digite seu salario: ");
    scanf("%f", &salario);
   	salarioAumento = salario * 0.25;
   	salarioNovo = salario + salarioAumento;
    printf("Seu salario novo e: %f", salarioNovo);

    return 0;
}
