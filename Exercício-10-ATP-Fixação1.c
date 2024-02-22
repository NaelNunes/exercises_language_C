#include <stdio.h>

int main()
{
    float salario, impostoSal, salarioLiq;
    printf("Qual e o seu salario atual? Vamos calcular o desconto do imposto de renda: \n");
    scanf("%f", &salario);
   	impostoSal = salario * 0.05;
   	salarioLiq = salario - impostoSal;
    printf("Seu salario liquido e: %f, o valor do imposto e: %f", salarioLiq, impostoSal);

    return 0;
}
